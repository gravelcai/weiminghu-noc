// ...

package weiminghu

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.util.HasRocketChipStageUtils


class CoreMemIntf extends Bundle

class CoreNode(implicit p: Parameter) extends SimpleLazyModule {
 val core_out = BundleBridgeSource(() => DecoupledIO(new CoreMemIntf()))
}

class MemNode(implicit p: Parameter) extends SimpleLazyModule {
  val mem_node = BundleBridgeSink[DecoupledIO[CoreMemIntf]]
}

class Network(implicit p: Parameter) extends SimpleLazyModule {
  val core_node = LazyModule(new CoreNode())
  val mem_node = LazyModule(new MemNode())

  mem_node := core_node
}