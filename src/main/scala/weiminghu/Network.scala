// ...

package weiminghu

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils


class CoreMemIntf extends Bundle

class Core(implicit p: Parameters) extends SimpleLazyModule {
 val core_out = BundleBridgeSource(() => DecoupledIO(new CoreMemIntf()))
}

class Mem(implicit p: Parameters) extends SimpleLazyModule {
  val mem_in = BundleBridgeSink[DecoupledIO[CoreMemIntf]]
}

class Network(implicit p: Parameters) extends SimpleLazyModule {
  val core_node = LazyModule(new Core())
  val mem_node = LazyModule(new Mem())

  mem_node.mem_in := core_node.core_out
}