circuit ImmGen :
  module ImmGen :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip instruction : UInt<32>, i_imm : SInt<64>, s_imm : SInt<64>, b_imm : SInt<64>}

    node i_imm_12 = bits(io.instruction, 31, 20) @[ImmGen.scala 13:34]
    node _i_imm_32_T = bits(i_imm_12, 11, 11) @[ImmGen.scala 14:41]
    node _i_imm_32_T_1 = bits(_i_imm_32_T, 0, 0) @[Bitwise.scala 74:15]
    node _i_imm_32_T_2 = mux(_i_imm_32_T_1, UInt<52>("hfffffffffffff"), UInt<52>("h0")) @[Bitwise.scala 74:12]
    node i_imm_32 = cat(_i_imm_32_T_2, i_imm_12) @[Cat.scala 31:58]
    node _io_i_imm_T = asSInt(i_imm_32) @[ImmGen.scala 15:26]
    io.i_imm <= _io_i_imm_T @[ImmGen.scala 15:14]
    node s_lower_half = bits(io.instruction, 11, 7) @[ImmGen.scala 18:38]
    node s_upper_half = bits(io.instruction, 31, 25) @[ImmGen.scala 19:38]
    node s_imm_12 = cat(s_upper_half, s_lower_half) @[Cat.scala 31:58]
    node _s_imm_64_T = bits(s_imm_12, 11, 11) @[ImmGen.scala 21:41]
    node _s_imm_64_T_1 = bits(_s_imm_64_T, 0, 0) @[Bitwise.scala 74:15]
    node _s_imm_64_T_2 = mux(_s_imm_64_T_1, UInt<52>("hfffffffffffff"), UInt<52>("h0")) @[Bitwise.scala 74:12]
    node s_imm_64 = cat(_s_imm_64_T_2, s_imm_12) @[Cat.scala 31:58]
    node _io_s_imm_T = asSInt(s_imm_64) @[ImmGen.scala 22:26]
    io.s_imm <= _io_s_imm_T @[ImmGen.scala 22:14]
    node sb_lower_half = bits(io.instruction, 11, 8) @[ImmGen.scala 24:39]
    node sb_upper_half = bits(io.instruction, 30, 25) @[ImmGen.scala 25:39]
    node sb_11thbit = bits(io.instruction, 7, 7) @[ImmGen.scala 26:36]
    node sb_12thbit = bits(io.instruction, 31, 31) @[ImmGen.scala 27:36]
    node sb_imm_13_lo_lo = asUInt(asSInt(UInt<1>("h0"))) @[Cat.scala 31:58]
    node sb_imm_13_lo = cat(sb_lower_half, sb_imm_13_lo_lo) @[Cat.scala 31:58]
    node sb_imm_13_hi_hi = cat(sb_12thbit, sb_11thbit) @[Cat.scala 31:58]
    node sb_imm_13_hi = cat(sb_imm_13_hi_hi, sb_upper_half) @[Cat.scala 31:58]
    node sb_imm_13 = cat(sb_imm_13_hi, sb_imm_13_lo) @[Cat.scala 31:58]
    node _sb_imm_64_T = bits(sb_imm_13, 12, 12) @[ImmGen.scala 29:43]
    node _sb_imm_64_T_1 = bits(_sb_imm_64_T, 0, 0) @[Bitwise.scala 74:15]
    node _sb_imm_64_T_2 = mux(_sb_imm_64_T_1, UInt<51>("h7ffffffffffff"), UInt<51>("h0")) @[Bitwise.scala 74:12]
    node _sb_imm_64_T_3 = cat(_sb_imm_64_T_2, sb_imm_13) @[Cat.scala 31:58]
    node sb_imm_64 = asSInt(_sb_imm_64_T_3) @[ImmGen.scala 29:61]
    io.b_imm <= sb_imm_64 @[ImmGen.scala 30:14]

