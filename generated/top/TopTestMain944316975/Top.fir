circuit Top :
  module Pc :
    input clock : Clock
    input reset : Reset
    output io : { flip in : SInt<64>, out : SInt<64>, pc4 : SInt<64>}

    reg reg : SInt<64>, clock with :
      reset => (reset, asSInt(UInt<64>("h0"))) @[Pc.scala 11:22]
    reg <= io.in @[Pc.scala 12:9]
    io.out <= reg @[Pc.scala 14:12]
    node _io_pc4_T = add(reg, asSInt(UInt<4>("h4"))) @[Pc.scala 15:19]
    node _io_pc4_T_1 = tail(_io_pc4_T, 1) @[Pc.scala 15:19]
    node _io_pc4_T_2 = asSInt(_io_pc4_T_1) @[Pc.scala 15:19]
    io.pc4 <= _io_pc4_T_2 @[Pc.scala 15:12]

  module InstMem :
    input clock : Clock
    input reset : Reset
    output io : { flip address : UInt<10>, inst : UInt<32>}

    cmem mem : UInt<32> [1024] @[InstMem.scala 13:18]
    infer mport io_inst_MPORT = mem[io.address], clock @[InstMem.scala 17:19]
    io.inst <= io_inst_MPORT @[InstMem.scala 17:13]

  module RegFiles :
    input clock : Clock
    input reset : Reset
    output io : { flip reg_write : UInt<1>, flip rs1 : UInt<5>, flip rs2 : UInt<5>, flip rd : UInt<5>, flip w_data : SInt<64>, r_data1 : SInt<64>, r_data2 : SInt<64>}

    wire _registers_WIRE : SInt<64>[32] @[RegFiles.scala 17:36]
    _registers_WIRE[0] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[1] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[2] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[3] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[4] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[5] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[6] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[7] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[8] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[9] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[10] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[11] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[12] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[13] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[14] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[15] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[16] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[17] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[18] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[19] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[20] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[21] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[22] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[23] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[24] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[25] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[26] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[27] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[28] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[29] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[30] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    _registers_WIRE[31] <= asSInt(UInt<64>("h0")) @[RegFiles.scala 17:36]
    reg registers : SInt<64>[32], clock with :
      reset => (reset, _registers_WIRE) @[RegFiles.scala 17:28]
    registers[0] <= asSInt(UInt<1>("h0")) @[RegFiles.scala 19:18]
    io.r_data1 <= registers[io.rs1] @[RegFiles.scala 21:16]
    io.r_data2 <= registers[io.rs2] @[RegFiles.scala 22:16]
    node _T = eq(io.reg_write, UInt<1>("h1")) @[RegFiles.scala 23:23]
    when _T : @[RegFiles.scala 23:32]
      node _T_1 = neq(io.rd, UInt<1>("h0")) @[RegFiles.scala 25:20]
      when _T_1 : @[RegFiles.scala 25:36]
        registers[io.rd] <= io.w_data @[RegFiles.scala 26:30]

  module Alu :
    input clock : Clock
    input reset : Reset
    output io : { flip oper_a : SInt<64>, flip oper_b : SInt<64>, flip alu_ctrl : UInt<5>, result : SInt<64>, zero : UInt<1>}

    wire res : SInt<64> @[Alu.scala 14:19]
    res <= asSInt(UInt<1>("h0")) @[Alu.scala 16:9]
    node _T = eq(UInt<1>("h0"), io.alu_ctrl) @[Alu.scala 17:25]
    when _T : @[Alu.scala 17:25]
      node _res_T = and(io.oper_a, io.oper_b) @[Alu.scala 18:42]
      node _res_T_1 = asSInt(_res_T) @[Alu.scala 18:42]
      res <= _res_T_1 @[Alu.scala 18:29]
    else :
      node _T_1 = eq(UInt<1>("h1"), io.alu_ctrl) @[Alu.scala 17:25]
      when _T_1 : @[Alu.scala 17:25]
        node _res_T_2 = or(io.oper_a, io.oper_b) @[Alu.scala 19:42]
        node _res_T_3 = asSInt(_res_T_2) @[Alu.scala 19:42]
        res <= _res_T_3 @[Alu.scala 19:29]
      else :
        node _T_2 = eq(UInt<2>("h2"), io.alu_ctrl) @[Alu.scala 17:25]
        when _T_2 : @[Alu.scala 17:25]
          node _res_T_4 = add(io.oper_a, io.oper_b) @[Alu.scala 20:42]
          node _res_T_5 = tail(_res_T_4, 1) @[Alu.scala 20:42]
          node _res_T_6 = asSInt(_res_T_5) @[Alu.scala 20:42]
          res <= _res_T_6 @[Alu.scala 20:29]
        else :
          node _T_3 = eq(UInt<3>("h6"), io.alu_ctrl) @[Alu.scala 17:25]
          when _T_3 : @[Alu.scala 17:25]
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

  module AluCtrl :
    input clock : Clock
    input reset : Reset
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

  module Ctrl :
    input clock : Clock
    input reset : Reset
    output io : { flip inst : UInt<32>, alu_src : UInt<1>, mem_to_reg : UInt<1>, reg_write : UInt<1>, mem_read : UInt<1>, mem_write : UInt<1>, branch : UInt<1>, alu_op : UInt<2>}

    node opcode = bits(io.inst, 6, 0) @[Ctrl.scala 18:25]
    node _io_alu_src_T = bits(io.inst, 6, 6) @[Ctrl.scala 20:28]
    node _io_alu_src_T_1 = not(_io_alu_src_T) @[Ctrl.scala 20:20]
    node _io_alu_src_T_2 = bits(io.inst, 5, 5) @[Ctrl.scala 20:46]
    node _io_alu_src_T_3 = bits(io.inst, 4, 4) @[Ctrl.scala 20:59]
    node _io_alu_src_T_4 = and(_io_alu_src_T_2, _io_alu_src_T_3) @[Ctrl.scala 20:50]
    node _io_alu_src_T_5 = not(_io_alu_src_T_4) @[Ctrl.scala 20:36]
    node _io_alu_src_T_6 = and(_io_alu_src_T_1, _io_alu_src_T_5) @[Ctrl.scala 20:33]
    io.alu_src <= _io_alu_src_T_6 @[Ctrl.scala 20:16]
    node _io_mem_to_reg_T = bits(io.inst, 6, 6) @[Ctrl.scala 22:31]
    node _io_mem_to_reg_T_1 = not(_io_mem_to_reg_T) @[Ctrl.scala 22:23]
    node _io_mem_to_reg_T_2 = bits(io.inst, 5, 5) @[Ctrl.scala 22:47]
    node _io_mem_to_reg_T_3 = not(_io_mem_to_reg_T_2) @[Ctrl.scala 22:39]
    node _io_mem_to_reg_T_4 = and(_io_mem_to_reg_T_1, _io_mem_to_reg_T_3) @[Ctrl.scala 22:36]
    node _io_mem_to_reg_T_5 = bits(io.inst, 4, 4) @[Ctrl.scala 22:63]
    node _io_mem_to_reg_T_6 = not(_io_mem_to_reg_T_5) @[Ctrl.scala 22:55]
    node _io_mem_to_reg_T_7 = and(_io_mem_to_reg_T_4, _io_mem_to_reg_T_6) @[Ctrl.scala 22:52]
    io.mem_to_reg <= _io_mem_to_reg_T_7 @[Ctrl.scala 22:19]
    node _io_reg_write_T = bits(io.inst, 6, 6) @[Ctrl.scala 23:30]
    node _io_reg_write_T_1 = not(_io_reg_write_T) @[Ctrl.scala 23:22]
    node _io_reg_write_T_2 = bits(io.inst, 5, 5) @[Ctrl.scala 23:47]
    node _io_reg_write_T_3 = bits(io.inst, 4, 4) @[Ctrl.scala 23:61]
    node _io_reg_write_T_4 = not(_io_reg_write_T_3) @[Ctrl.scala 23:53]
    node _io_reg_write_T_5 = and(_io_reg_write_T_2, _io_reg_write_T_4) @[Ctrl.scala 23:51]
    node _io_reg_write_T_6 = not(_io_reg_write_T_5) @[Ctrl.scala 23:38]
    node _io_reg_write_T_7 = and(_io_reg_write_T_1, _io_reg_write_T_6) @[Ctrl.scala 23:35]
    io.reg_write <= _io_reg_write_T_7 @[Ctrl.scala 23:18]
    node _io_mem_read_T = bits(io.inst, 6, 6) @[Ctrl.scala 24:30]
    node _io_mem_read_T_1 = not(_io_mem_read_T) @[Ctrl.scala 24:22]
    node _io_mem_read_T_2 = bits(io.inst, 5, 5) @[Ctrl.scala 24:46]
    node _io_mem_read_T_3 = not(_io_mem_read_T_2) @[Ctrl.scala 24:38]
    node _io_mem_read_T_4 = and(_io_mem_read_T_1, _io_mem_read_T_3) @[Ctrl.scala 24:35]
    node _io_mem_read_T_5 = bits(io.inst, 4, 4) @[Ctrl.scala 24:62]
    node _io_mem_read_T_6 = not(_io_mem_read_T_5) @[Ctrl.scala 24:54]
    node _io_mem_read_T_7 = and(_io_mem_read_T_4, _io_mem_read_T_6) @[Ctrl.scala 24:51]
    io.mem_read <= _io_mem_read_T_7 @[Ctrl.scala 24:17]
    node _io_mem_write_T = bits(io.inst, 6, 6) @[Ctrl.scala 25:30]
    node _io_mem_write_T_1 = not(_io_mem_write_T) @[Ctrl.scala 25:22]
    node _io_mem_write_T_2 = bits(io.inst, 5, 5) @[Ctrl.scala 25:45]
    node _io_mem_write_T_3 = bits(io.inst, 4, 4) @[Ctrl.scala 25:60]
    node _io_mem_write_T_4 = not(_io_mem_write_T_3) @[Ctrl.scala 25:52]
    node _io_mem_write_T_5 = and(_io_mem_write_T_2, _io_mem_write_T_4) @[Ctrl.scala 25:49]
    node _io_mem_write_T_6 = and(_io_mem_write_T_1, _io_mem_write_T_5) @[Ctrl.scala 25:35]
    io.mem_write <= _io_mem_write_T_6 @[Ctrl.scala 25:18]
    node _io_branch_T = bits(opcode, 6, 6) @[Ctrl.scala 26:24]
    io.branch <= _io_branch_T @[Ctrl.scala 26:15]
    node _alu_op0_T = bits(io.inst, 6, 6) @[Ctrl.scala 27:27]
    node _alu_op0_T_1 = bits(io.inst, 5, 5) @[Ctrl.scala 27:42]
    node _alu_op0_T_2 = and(_alu_op0_T, _alu_op0_T_1) @[Ctrl.scala 27:32]
    node _alu_op0_T_3 = bits(io.inst, 4, 4) @[Ctrl.scala 27:58]
    node _alu_op0_T_4 = not(_alu_op0_T_3) @[Ctrl.scala 27:50]
    node alu_op0 = and(_alu_op0_T_2, _alu_op0_T_4) @[Ctrl.scala 27:47]
    node _alu_op1_T = bits(io.inst, 6, 6) @[Ctrl.scala 28:28]
    node _alu_op1_T_1 = not(_alu_op1_T) @[Ctrl.scala 28:20]
    node _alu_op1_T_2 = bits(io.inst, 4, 4) @[Ctrl.scala 28:43]
    node alu_op1 = and(_alu_op1_T_1, _alu_op1_T_2) @[Ctrl.scala 28:33]
    node _io_alu_op_T = cat(alu_op1, alu_op0) @[Cat.scala 31:58]
    io.alu_op <= _io_alu_op_T @[Ctrl.scala 30:15]

  module ImmGen :
    input clock : Clock
    input reset : Reset
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

  module DataMem :
    input clock : Clock
    input reset : Reset
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

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io : { reg_out : SInt<64>}

    inst pc of Pc @[Top.scala 11:20]
    pc.clock <= clock
    pc.reset <= reset
    inst imem of InstMem @[Top.scala 12:22]
    imem.clock <= clock
    imem.reset <= reset
    inst reg_files of RegFiles @[Top.scala 13:27]
    reg_files.clock <= clock
    reg_files.reset <= reset
    inst alu of Alu @[Top.scala 14:21]
    alu.clock <= clock
    alu.reset <= reset
    inst alu_ctrl of AluCtrl @[Top.scala 15:26]
    alu_ctrl.clock <= clock
    alu_ctrl.reset <= reset
    inst ctrl of Ctrl @[Top.scala 16:22]
    ctrl.clock <= clock
    ctrl.reset <= reset
    inst imm_gen of ImmGen @[Top.scala 17:25]
    imm_gen.clock <= clock
    imm_gen.reset <= reset
    inst dmem of DataMem @[Top.scala 18:22]
    dmem.clock <= clock
    dmem.reset <= reset
    node _imem_io_address_T = bits(pc.io.out, 11, 2) @[Top.scala 21:33]
    imem.io.address <= _imem_io_address_T @[Top.scala 21:21]
    pc.io.in <= pc.io.pc4 @[Top.scala 23:14]
    ctrl.io.inst <= imem.io.inst @[Top.scala 26:18]
    imm_gen.io.instruction <= imem.io.inst @[Top.scala 27:28]
    alu_ctrl.io.alu_op <= ctrl.io.alu_op @[Top.scala 30:24]
    node _alu_ctrl_io_fun3_T = bits(imem.io.inst, 14, 12) @[Top.scala 31:36]
    alu_ctrl.io.fun3 <= _alu_ctrl_io_fun3_T @[Top.scala 31:22]
    node _alu_ctrl_io_fun7_T = bits(imem.io.inst, 30, 30) @[Top.scala 32:36]
    alu_ctrl.io.fun7 <= _alu_ctrl_io_fun7_T @[Top.scala 32:22]
    reg_files.io.reg_write <= ctrl.io.reg_write @[Top.scala 36:28]
    node _reg_files_io_rs1_T = bits(imem.io.inst, 19, 15) @[Top.scala 37:36]
    reg_files.io.rs1 <= _reg_files_io_rs1_T @[Top.scala 37:22]
    node _reg_files_io_rs2_T = bits(imem.io.inst, 24, 20) @[Top.scala 38:36]
    reg_files.io.rs2 <= _reg_files_io_rs2_T @[Top.scala 38:22]
    node _reg_files_io_rd_T = bits(imem.io.inst, 11, 7) @[Top.scala 39:35]
    reg_files.io.rd <= _reg_files_io_rd_T @[Top.scala 39:21]
    node _reg_files_io_w_data_T = bits(ctrl.io.mem_to_reg, 0, 0) @[Top.scala 41:53]
    node _reg_files_io_w_data_T_1 = mux(_reg_files_io_w_data_T, dmem.io.read_data, alu.io.result) @[Top.scala 41:31]
    reg_files.io.w_data <= _reg_files_io_w_data_T_1 @[Top.scala 41:25]
    dmem.io.mem_write <= ctrl.io.mem_write @[Top.scala 43:23]
    dmem.io.mem_read <= ctrl.io.mem_read @[Top.scala 44:22]
    node _dmem_io_address_T = bits(alu.io.result, 11, 2) @[Top.scala 45:37]
    dmem.io.address <= _dmem_io_address_T @[Top.scala 45:21]
    dmem.io.write_data <= reg_files.io.r_data2 @[Top.scala 46:24]
    wire imm : SInt<64> @[Top.scala 48:20]
    imm <= asSInt(UInt<64>("h0")) @[Top.scala 49:9]
    node _T = bits(imem.io.inst, 6, 0) @[Top.scala 50:21]
    node _T_1 = eq(_T, UInt<2>("h3")) @[Top.scala 50:27]
    when _T_1 : @[Top.scala 50:44]
      imm <= imm_gen.io.i_imm @[Top.scala 51:13]
    else :
      node _T_2 = bits(imem.io.inst, 6, 0) @[Top.scala 52:27]
      node _T_3 = eq(_T_2, UInt<6>("h23")) @[Top.scala 52:33]
      when _T_3 : @[Top.scala 52:50]
        imm <= imm_gen.io.s_imm @[Top.scala 53:13]
      else :
        node _T_4 = bits(imem.io.inst, 6, 0) @[Top.scala 54:27]
        node _T_5 = eq(_T_4, UInt<7>("h63")) @[Top.scala 54:33]
        when _T_5 : @[Top.scala 54:50]
          imm <= imm_gen.io.b_imm @[Top.scala 55:13]
    alu.io.oper_a <= reg_files.io.r_data1 @[Top.scala 59:19]
    node _alu_io_oper_b_T = bits(ctrl.io.alu_src, 0, 0) @[Top.scala 60:44]
    node _alu_io_oper_b_T_1 = mux(_alu_io_oper_b_T, imm, reg_files.io.r_data2) @[Top.scala 60:25]
    alu.io.oper_b <= _alu_io_oper_b_T_1 @[Top.scala 60:19]
    alu.io.alu_ctrl <= alu_ctrl.io.alu_ctrl @[Top.scala 61:21]
    node _T_6 = bits(alu.io.zero, 0, 0) @[Top.scala 64:24]
    node _T_7 = bits(ctrl.io.branch, 0, 0) @[Top.scala 64:51]
    node _T_8 = and(_T_6, _T_7) @[Top.scala 64:31]
    when _T_8 : @[Top.scala 64:58]
      node _pc_io_in_T = add(pc.io.out, imm) @[Top.scala 65:31]
      node _pc_io_in_T_1 = tail(_pc_io_in_T, 1) @[Top.scala 65:31]
      node _pc_io_in_T_2 = asSInt(_pc_io_in_T_1) @[Top.scala 65:31]
      pc.io.in <= _pc_io_in_T_2 @[Top.scala 65:18]
    io.reg_out <= reg_files.io.r_data1 @[Top.scala 67:16]

