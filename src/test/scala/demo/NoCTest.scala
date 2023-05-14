package weiminghu

import chisel3._
import org.chipsalliance.cde.config.{Config, Parameters}
import chiseltest._
import chiseltest.simulator.{SimulatorDebugAnnotation}
import org.scalatest.flatspec.AnyFlatSpec
import constellation.test._


class NoCChiselTester(implicit val p: Parameters) extends Module {
  val th = Module(new TestHarness)
  when (th.io.success) { stop() }
}

class TLNoCChiselTester(implicit val p: Parameters) extends Module {
  val th = Module(new TLTestHarness)
  when (th.io.success) { stop() }
}

class AXI4NoCChiselTester(implicit val p: Parameters) extends Module {
  val th = Module(new AXI4TestHarness)
  when (th.io.success) { stop() }
}

class EvalNoCChiselTester(implicit val p: Parameters) extends Module {
  val th = Module(new EvalHarness)
  when (th.io.success) { stop() }
}

abstract class BaseNoCTest(
  gen: Parameters => Module,
  configs: Seq[Config]) extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "NoC"

  configs.foreach { config =>
    it should s"pass test with config ${config.getClass.getName}" in {
      implicit val p: Parameters = config
      test(gen(p))
        .withAnnotations(Seq(
          SimulatorDebugAnnotation,
        ))
        .runUntilStop(timeout = 1000 * 1000)
    }
  }
}

abstract class NoCTest(configs: Seq[Config]) extends BaseNoCTest(p => new NoCChiselTester()(p), configs)
abstract class TLNoCTest(configs: Seq[Config]) extends BaseNoCTest(p => new TLNoCChiselTester()(p), configs)
abstract class AXI4NoCTest(configs: Seq[Config]) extends BaseNoCTest(p => new AXI4NoCChiselTester()(p), configs)


// these tests allow you to run an infividual config
class NoCTest00 extends NoCTest(Seq(new TestConfig00))