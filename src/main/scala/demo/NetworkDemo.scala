// ...

package weiminghu.demo

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.amba.axi4._

// define a core that has an AXI4 master node
class Core (id: Int) (implicit p: Parameters) extends LazyModule {
  val node = AXI4MasterNode (
    Seq (AXI4MasterPortParameters (
      masters = Seq (AXI4MasterParameters (
        name = s"core_$id"
      ))
    ))
  )

  lazy val module = new LazyModuleImp (this) {
    // generate some dummy transactions
    val (out, edge) = node.out(0)
    val addr = RegInit (0.U (32.W))
    val data = RegInit (0.U (32.W))
    val wstrb = RegInit ("b1111".U (4.W))
    val write = RegInit (false.B)
    val valid = RegInit (false.B)

    // state machine
    val sIdle :: sWriteAddr :: sWriteData :: sReadAddr :: sReadData :: Nil = Enum (5)
    val state = RegInit (sIdle)

    switch (state) {
      is (sIdle) {
        when (valid) {
          state := Mux (write, sWriteAddr, sReadAddr)
        }
      }
      is (sWriteAddr) {
        when (out.aw.fire) {
          state := sWriteData
        }
      }
      is (sWriteData) {
        when (out.w.fire) {
          state := sIdle
          valid := false.B
        }
      }
      is (sReadAddr) {
        when (out.ar.fire) {
          state := sReadData
        }
      }
      is (sReadData) {
        when (out.r.fire) {
          state := sIdle
          valid := false.B
        }
      }
    }

    // generate write address channel signals
    out.aw.valid := state === sWriteAddr
    out.aw.bits.addr := addr
    out.aw.bits.size := log2Ceil (edge.bundle.dataBits / 8).U

    // generate write data channel signals
    out.w.valid := state === sWriteData
    out.w.bits.data := data
    out.w.bits.strb := wstrb

    // generate read address channel signals
    out.ar.valid := state === sReadAddr
    out.ar.bits.addr := addr
    out.ar.bits.size := log2Ceil (edge.bundle.dataBits / 8).U

    // accept read data channel signals
    out.r.ready := state === sReadData

  }
}

// define a memory that has an AXI4 slave node
class Memory () (implicit p: Parameters) extends LazyModule {
  val node = AXI4SlaveNode (
    Seq (AXI4SlavePortParameters (
      slaves = Seq (
        AXI4SlaveParameters (
          address       = List (AddressSet (0x00000000L, 0xFFFFFFFFL)),
          regionType = RegionType.UNCACHED,
          executable    = true,
          supportsWrite = TransferSizes(1, 256),
          supportsRead  = TransferSizes(1, 256)
        )
      ),
      beatBytes = 8
    ))
  )

  lazy val module = new LazyModuleImp (this) {
    // implement a simple memory model with a register file
    val regs = Mem(1024, UInt(64.W))

    // handle the slave transactions
    val (in, edge) = node.in(0)

    // write address channel logic
    in.aw.ready := true.B

    // write data channel logic
    in.w.ready := true.B
    when(in.w.fire) {
      // write data to register file according to address and strobe signals
      val addr = in.aw.bits.addr >> log2Ceil(edge.bundle.dataBits / 8)
//      val mask = in.w.bits.strb.asBools.zipWithIndex.map { case(b, i) => b << i }.reduce(_ | _).asUInt()
      regs.write(addr.asUInt, in.w.bits.data)
    }

    // write response channel logic
    in.b.valid := in.w.fire
    in.b.bits.resp := 0.U // OK response
    in.b.bits.id := in.aw.bits.id // same ID as write address channel

    // read address channel logic
    in.ar.ready := true.B

    // read data channel logic
    in.r.valid := RegNext(in.ar.fire)
    in.r.bits.data := regs.read(in.ar.bits.addr >> log2Ceil(edge.bundle.dataBits / 8))
  }
}

// define a top module that instantiates the cores, the memory and the crossbar
class NetworkDemo (nCores: Int) (implicit p: Parameters) extends LazyModule {
  val cores = (0 until nCores) map { i => LazyModule(new Core(i)) }
  val memory = LazyModule(new Memory())

  val xbar = AXI4Xbar()

  for (c <- cores) {
    xbar :=* c.node
  }

  memory.node := xbar

  lazy val module = new LazyModuleImp(this) {

  }
}