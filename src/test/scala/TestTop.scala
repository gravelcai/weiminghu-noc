package gcd

import chisel3._
import chisel3.util._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}


object TestTop extends App {
  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => new DecoupledGcd(16))
  ))
}