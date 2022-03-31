circuit AluCtrl :
  module AluCtrl :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip alu_op : UInt<2>, flip fun3 : UInt<3>, flip fun7 : UInt<1>, alu_ctrl : UInt<4>}

    io.alu_ctrl <= UInt<1>("h0") @[AluCtrl.scala 13:17]
    node _T = eq(UInt<1>("h0"), io.alu_op) @[AluCtrl.scala 14:23]
    when _T : @[AluCtrl.scala 14:23]
      io.alu_ctrl <= UInt<2>("h2") @[AluCtrl.scala 15:35]
    else :
      node _T_1 = eq(UInt<1>("h1"), io.alu_op) @[AluCtrl.scala 14:23]
      when _T_1 : @[AluCtrl.scala 14:23]
        io.alu_ctrl <= UInt<3>("h6") @[AluCtrl.scala 16:35]
      else :
        node _T_2 = eq(UInt<2>("h2"), io.alu_op) @[AluCtrl.scala 14:23]
        when _T_2 : @[AluCtrl.scala 14:23]
          node _T_3 = eq(UInt<3>("h7"), io.fun3) @[AluCtrl.scala 18:28]
          when _T_3 : @[AluCtrl.scala 18:28]
            io.alu_ctrl <= UInt<1>("h0") @[AluCtrl.scala 19:42]
          else :
            node _T_4 = eq(UInt<3>("h6"), io.fun3) @[AluCtrl.scala 18:28]
            when _T_4 : @[AluCtrl.scala 18:28]
              io.alu_ctrl <= UInt<1>("h1") @[AluCtrl.scala 20:42]
            else :
              node _T_5 = eq(UInt<1>("h0"), io.fun3) @[AluCtrl.scala 18:28]
              when _T_5 : @[AluCtrl.scala 18:28]
                node io_alu_ctrl_hi = cat(UInt<1>("h0"), io.fun7) @[Cat.scala 31:58]
                node _io_alu_ctrl_T = cat(io_alu_ctrl_hi, UInt<2>("h2")) @[Cat.scala 31:58]
                io.alu_ctrl <= _io_alu_ctrl_T @[AluCtrl.scala 21:42]

