package weiminghu.demo

import chisel3._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}
import org.chipsalliance.cde.config.{Config, Parameters}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils
import constellation.noc._
import constellation.topology.Mesh2D
import constellation.channel._
import constellation.router.HasRouterCtrlConsts
import constellation.routing.Mesh2DDimensionOrderedRouting
import constellation.test.{HasSuccessIO, NoCTester}

class NoCDemoTest(implicit p: Parameters) extends Module with HasRouterCtrlConsts with HasSuccessIO {
  val lazyNoC = LazyModule(new NoCDemo())
  val noc = Module(lazyNoC.module)
  noc.io.router_clocks.foreach(_.clock := clock)
  noc.io.router_clocks.foreach(_.reset := reset)

  val noc_tester = Module(new NoCTester(lazyNoC.allIngressParams, lazyNoC.allEgressParams))
  noc.io.ingress <> noc_tester.io.to_noc
  noc_tester.io.from_noc <> noc.io.egress
  io.success := noc_tester.io.success
}

object NoCDemoTest extends App with HasRocketChipStageUtils {
  val nocParams = NoCParams(
    topology = Mesh2D(3, 3),
    channelParamGen = (a, b) => UserChannelParams(Seq.fill(4) { UserVirtualChannelParams(5) }),
    ingresses = (0 until 9).map { i => UserIngressParams(i) },
    egresses = (0 until 9).map { i => UserEgressParams(i) },
    flows = Seq.tabulate(9, 9) { (s, d) => FlowParams(s, d, 0) }.flatten,
    routingRelation = Mesh2DDimensionOrderedRouting(),

    nocName = "Mesh2DDemo"
  )

  val internalNoCParams = InternalNoCParams(nocParams)
  implicit val config = new Config((_,_,_) => {
    case InternalNoCKey => internalNoCParams
  })

//  val noc_demo = LazyModule(new NoCDemo)
  val noc_demo = new NoCDemoTest()
  val module = noc_demo.noc

  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => module)
  ))
//  writeOutputFile(".", "NoCDemo.graphml", noc.noc.graphML)
}