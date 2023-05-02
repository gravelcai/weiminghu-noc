// ...

package weiminghu

import chisel3._
import chisel3.util._
//import org.chipsalliance.cde.config._
//import freechips.rocketchip.diplomacy._
//import freechips.rocketchip.util.HasRocketChipStageUtils

class Network extends Module {
  val io = IO(new Bundle{
    val in = Input(UInt(4.W))
    val out = Output(UInt(4.W))
  })

  io.out := Cat(io.in(2, 0), io.in(3))
}