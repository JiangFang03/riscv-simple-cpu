circuit Alu :
  module Alu :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip oper_a : SInt<64>, flip oper_b : SInt<64>, flip aluCtrl : UInt<5>, result : SInt<64>, zero : UInt<1>}

    wire res : SInt<64> @[Alu.scala 14:19]
    res <= asSInt(UInt<1>("h0")) @[Alu.scala 16:9]
    node _T = eq(UInt<1>("h0"), io.aluCtrl) @[Alu.scala 17:24]
    when _T : @[Alu.scala 17:24]
      node _res_T = and(io.oper_a, io.oper_b) @[Alu.scala 18:42]
      node _res_T_1 = asSInt(_res_T) @[Alu.scala 18:42]
      res <= _res_T_1 @[Alu.scala 18:29]
    else :
      node _T_1 = eq(UInt<1>("h1"), io.aluCtrl) @[Alu.scala 17:24]
      when _T_1 : @[Alu.scala 17:24]
        node _res_T_2 = or(io.oper_a, io.oper_b) @[Alu.scala 19:42]
        node _res_T_3 = asSInt(_res_T_2) @[Alu.scala 19:42]
        res <= _res_T_3 @[Alu.scala 19:29]
      else :
        node _T_2 = eq(UInt<2>("h2"), io.aluCtrl) @[Alu.scala 17:24]
        when _T_2 : @[Alu.scala 17:24]
          node _res_T_4 = add(io.oper_a, io.oper_b) @[Alu.scala 20:42]
          node _res_T_5 = tail(_res_T_4, 1) @[Alu.scala 20:42]
          node _res_T_6 = asSInt(_res_T_5) @[Alu.scala 20:42]
          res <= _res_T_6 @[Alu.scala 20:29]
        else :
          node _T_3 = eq(UInt<3>("h6"), io.aluCtrl) @[Alu.scala 17:24]
          when _T_3 : @[Alu.scala 17:24]
            node _res_T_7 = sub(io.oper_a, io.oper_b) @[Alu.scala 21:42]
            node _res_T_8 = tail(_res_T_7, 1) @[Alu.scala 21:42]
            node _res_T_9 = asSInt(_res_T_8) @[Alu.scala 21:42]
            res <= _res_T_9 @[Alu.scala 21:29]
    node _T_4 = eq(res, asSInt(UInt<1>("h0"))) @[Alu.scala 23:14]
    when _T_4 : @[Alu.scala 23:22]
      io.zero <= UInt<1>("h1") @[Alu.scala 24:17]
    else :
      io.zero <= UInt<1>("h0") @[Alu.scala 26:17]
    io.result <= res @[Alu.scala 28:15]

