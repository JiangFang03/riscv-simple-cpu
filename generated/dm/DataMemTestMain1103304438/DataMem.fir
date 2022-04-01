circuit DataMem :
  module DataMem :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip mem_write : UInt<1>, flip mem_read : UInt<1>, flip address : UInt<10>, flip write_data : SInt<64>, read_data : SInt<64>}

    cmem mem : SInt<64> [1024] @[DataMem.scala 16:18]
    node _T = eq(io.mem_write, UInt<1>("h1")) @[DataMem.scala 18:23]
    node _T_1 = eq(io.mem_read, UInt<1>("h0")) @[DataMem.scala 18:49]
    node _T_2 = and(_T, _T_1) @[DataMem.scala 18:34]
    when _T_2 : @[DataMem.scala 18:60]
      write mport MPORT = mem[io.address], clock
      MPORT <= io.write_data
      io.read_data is invalid @[DataMem.scala 21:22]
    else :
      infer mport io_read_data_MPORT = mem[io.address], clock @[DataMem.scala 24:28]
      io.read_data <= io_read_data_MPORT @[DataMem.scala 24:22]

