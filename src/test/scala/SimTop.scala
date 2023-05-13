package weiminghu

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}


object SimTop extends App with HasRocketChipStageUtils {
  implicit val config = Parameters.empty
  val network = LazyModule(new NetworkDemo(4))
  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => network.module)
  ))
  writeOutputFile(".", "Network.graphml", network.graphML)
}