circuit Pc :
  module Pc :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip in : SInt<64>, out : SInt<64>, pc4 : SInt<64>}

    reg reg : SInt<64>, clock with :
      reset => (reset, asSInt(UInt<64>("h0"))) @[Pc.scala 11:22]
    reg <= io.in @[Pc.scala 12:9]
    io.out <= reg @[Pc.scala 14:12]
    node _io_pc4_T = add(reg, asSInt(UInt<4>("h4"))) @[Pc.scala 15:19]
    node _io_pc4_T_1 = tail(_io_pc4_T, 1) @[Pc.scala 15:19]
    node _io_pc4_T_2 = asSInt(_io_pc4_T_1) @[Pc.scala 15:19]
    io.pc4 <= _io_pc4_T_2 @[Pc.scala 15:12]

