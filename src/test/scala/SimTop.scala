package weiminghu

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils


object SimTop {
  override def main(args: Array[String]): Unit = {
    implicit val config = Parameter.empty
    val network = LazyModule(new Network())
    val verilog = chisel3.stage.ChiselStage.emitVerilog(network.module)
    writeOutputFile("./build", "SimTop.v", verilog)
  }
}