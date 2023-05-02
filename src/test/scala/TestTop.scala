package weiminghu

import chisel3._
import chisel3.util._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}


object TestTop extends App {
  println("Export TestTop.v")
  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => new Network())
  ))
}