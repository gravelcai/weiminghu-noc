package weiminghu.demo

import chisel3._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}
import org.chipsalliance.cde.config.{Parameters, Config}
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils

import constellation.noc._
import constellation.topology.Mesh2D
import constellation.channel._
import constellation.routing.Mesh2DDimensionOrderedRouting


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

  val noc_demo = LazyModule(new NoCDemo)

  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => noc_demo.module)
  ))
//  writeOutputFile(".", "NoCDemo.graphml", noc.noc.graphML)
}