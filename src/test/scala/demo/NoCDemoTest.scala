package weiminghu

import chisel3._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}
import constellation.channel._
import constellation.noc._
import constellation.routing.Mesh2DDimensionOrderedRouting
import constellation.topology.Mesh2D
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils
import org.chipsalliance.cde.config.{Field, Parameters}


class NoCDemo(implicit val p: Parameters) extends Module {
  val nocParams = NoCParams(
    topology = Mesh2D(3, 3),
    channelParamGen = (a, b) => UserChannelParams(Seq.fill(4) {
      UserVirtualChannelParams(5)
    }),
    ingresses = (0 until 9).map { i => UserIngressParams(i) },
    egresses = (0 until 9).map { i => UserEgressParams(i) },
    flows = Seq.tabulate(9, 9) { (s, d) => FlowParams(s, d, 0) }.flatten,
    routingRelation = Mesh2DDimensionOrderedRouting(),

    nocName = "Mesh2DDemo"
  )

  val noc = LazyModule(new NoC(nocParams))
}

case object NoCDemoKey extends Field[NoCParams]


object NoCDemo extends App with HasRocketChipStageUtils {
//  val nocParams = NoCParams(
//    topology = Mesh2D(3, 3),
//    channelParamGen = (a, b) => UserChannelParams(Seq.fill(4) { UserVirtualChannelParams(5) }),
//    ingresses = (0 until 9).map { i => UserIngressParams(i) },
//    egresses = (0 until 9).map { i => UserEgressParams(i) },
//    flows = Seq.tabulate(9, 9) { (s, d) => FlowParams(s, d, 0) }.flatten,
//    routingRelation = Mesh2DDimensionOrderedRouting(),
//
//    nocName = "Mesh2DDemo"
//  )
//  val config = new Config((_,_,_) => {
//    NoCDemoKey => nocParams
//  })

  implicit val config = Parameters.empty

//  val noc = new NoCDemo
  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => new NoCDemo)
  ))
//  writeOutputFile(".", "NoCDemo.graphml", noc.noc.graphML)
}