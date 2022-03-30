module Alu(
  input         clock,
  input         reset,
  input  [63:0] io_oper_a,
  input  [63:0] io_oper_b,
  input  [4:0]  io_aluCtrl,
  output [63:0] io_result,
  output        io_zero
);
  wire [63:0] _res_T_1 = $signed(io_oper_a) & $signed(io_oper_b); // @[Alu.scala 18:42]
  wire [63:0] _res_T_3 = $signed(io_oper_a) | $signed(io_oper_b); // @[Alu.scala 19:42]
  wire [63:0] _res_T_6 = $signed(io_oper_a) + $signed(io_oper_b); // @[Alu.scala 20:42]
  wire [63:0] _res_T_9 = $signed(io_oper_a) - $signed(io_oper_b); // @[Alu.scala 21:42]
  wire [63:0] _GEN_0 = 5'h6 == io_aluCtrl ? $signed(_res_T_9) : $signed(64'sh0); // @[Alu.scala 17:24 21:29 16:9]
  wire [63:0] _GEN_1 = 5'h2 == io_aluCtrl ? $signed(_res_T_6) : $signed(_GEN_0); // @[Alu.scala 17:24 20:29]
  wire [63:0] _GEN_2 = 5'h1 == io_aluCtrl ? $signed(_res_T_3) : $signed(_GEN_1); // @[Alu.scala 17:24 19:29]
  wire [63:0] res = 5'h0 == io_aluCtrl ? $signed(_res_T_1) : $signed(_GEN_2); // @[Alu.scala 17:24 18:29]
  assign io_result = 5'h0 == io_aluCtrl ? $signed(_res_T_1) : $signed(_GEN_2); // @[Alu.scala 17:24 18:29]
  assign io_zero = $signed(res) == 64'sh0; // @[Alu.scala 23:14]
endmodule
