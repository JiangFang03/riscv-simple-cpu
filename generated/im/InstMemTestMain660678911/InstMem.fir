circuit InstMem :
  module InstMem :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip address : UInt<10>, inst : UInt<32>}

    cmem mem : UInt<32> [1024] @[InstMem.scala 13:18]
    infer mport io_inst_MPORT = mem[io.address], clock @[InstMem.scala 17:19]
    io.inst <= io_inst_MPORT @[InstMem.scala 17:13]

