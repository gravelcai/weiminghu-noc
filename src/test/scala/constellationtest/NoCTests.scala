package weiminghu.constellationtest

import chisel3._
import org.chipsalliance.cde.config.{Config, Parameters}
import constellation.test._
import chisel3.stage.{ChiselGeneratorAnnotation, ChiselStage}



object NoCTest00 extends App {
  implicit val config: Parameters = new TestConfig00
  val th = Module(new TestHarness)
  (new ChiselStage).execute(args, Seq(
    ChiselGeneratorAnnotation(() => th)
  ))
}