module Ctrl(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output        io_alu_src,
  output        io_mem_to_reg,
  output        io_reg_write,
  output        io_mem_read,
  output        io_mem_write,
  output        io_branch,
  output [1:0]  io_alu_op
);
  wire [6:0] opcode = io_inst[6:0]; // @[Ctrl.scala 18:25]
  wire  _io_alu_src_T_1 = ~io_inst[6]; // @[Ctrl.scala 20:20]
  wire  _io_mem_to_reg_T_4 = _io_alu_src_T_1 & ~io_inst[5]; // @[Ctrl.scala 22:36]
  wire  _io_mem_to_reg_T_6 = ~io_inst[4]; // @[Ctrl.scala 22:55]
  wire  _io_reg_write_T_5 = io_inst[5] & _io_mem_to_reg_T_6; // @[Ctrl.scala 23:51]
  wire  alu_op0 = io_inst[6] & io_inst[5] & _io_mem_to_reg_T_6; // @[Ctrl.scala 27:47]
  wire  alu_op1 = _io_alu_src_T_1 & io_inst[4]; // @[Ctrl.scala 28:33]
  assign io_alu_src = ~io_inst[6] & ~(io_inst[5] & io_inst[4]); // @[Ctrl.scala 20:33]
  assign io_mem_to_reg = _io_alu_src_T_1 & ~io_inst[5] & ~io_inst[4]; // @[Ctrl.scala 22:52]
  assign io_reg_write = _io_alu_src_T_1 & ~(io_inst[5] & _io_mem_to_reg_T_6); // @[Ctrl.scala 23:35]
  assign io_mem_read = _io_mem_to_reg_T_4 & _io_mem_to_reg_T_6; // @[Ctrl.scala 24:51]
  assign io_mem_write = _io_alu_src_T_1 & _io_reg_write_T_5; // @[Ctrl.scala 25:35]
  assign io_branch = opcode[6]; // @[Ctrl.scala 26:24]
  assign io_alu_op = {alu_op1,alu_op0}; // @[Cat.scala 31:58]
endmodule
