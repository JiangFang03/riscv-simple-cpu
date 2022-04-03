module Pc(
  input         clock,
  input         reset,
  input  [63:0] io_in,
  output [63:0] io_out,
  output [63:0] io_pc4
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] reg_; // @[Pc.scala 11:22]
  assign io_out = reg_; // @[Pc.scala 14:12]
  assign io_pc4 = $signed(reg_) + 64'sh4; // @[Pc.scala 15:19]
  always @(posedge clock) begin
    if (reset) begin // @[Pc.scala 11:22]
      reg_ <= 64'sh0; // @[Pc.scala 11:22]
    end else begin
      reg_ <= io_in; // @[Pc.scala 12:9]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  reg_ = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstMem(
  input         clock,
  input  [9:0]  io_address,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] mem [0:1023]; // @[InstMem.scala 13:18]
  wire  mem_io_inst_MPORT_en; // @[InstMem.scala 13:18]
  wire [9:0] mem_io_inst_MPORT_addr; // @[InstMem.scala 13:18]
  wire [31:0] mem_io_inst_MPORT_data; // @[InstMem.scala 13:18]
  assign mem_io_inst_MPORT_en = 1'h1;
  assign mem_io_inst_MPORT_addr = io_address;
  assign mem_io_inst_MPORT_data = mem[mem_io_inst_MPORT_addr]; // @[InstMem.scala 13:18]
  assign io_inst = mem_io_inst_MPORT_data; // @[InstMem.scala 17:13]
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegFiles(
  input         clock,
  input         reset,
  input         io_reg_write,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_w_data,
  output [63:0] io_r_data1,
  output [63:0] io_r_data2
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] registers_0; // @[RegFiles.scala 17:28]
  reg [63:0] registers_1; // @[RegFiles.scala 17:28]
  reg [63:0] registers_2; // @[RegFiles.scala 17:28]
  reg [63:0] registers_3; // @[RegFiles.scala 17:28]
  reg [63:0] registers_4; // @[RegFiles.scala 17:28]
  reg [63:0] registers_5; // @[RegFiles.scala 17:28]
  reg [63:0] registers_6; // @[RegFiles.scala 17:28]
  reg [63:0] registers_7; // @[RegFiles.scala 17:28]
  reg [63:0] registers_8; // @[RegFiles.scala 17:28]
  reg [63:0] registers_9; // @[RegFiles.scala 17:28]
  reg [63:0] registers_10; // @[RegFiles.scala 17:28]
  reg [63:0] registers_11; // @[RegFiles.scala 17:28]
  reg [63:0] registers_12; // @[RegFiles.scala 17:28]
  reg [63:0] registers_13; // @[RegFiles.scala 17:28]
  reg [63:0] registers_14; // @[RegFiles.scala 17:28]
  reg [63:0] registers_15; // @[RegFiles.scala 17:28]
  reg [63:0] registers_16; // @[RegFiles.scala 17:28]
  reg [63:0] registers_17; // @[RegFiles.scala 17:28]
  reg [63:0] registers_18; // @[RegFiles.scala 17:28]
  reg [63:0] registers_19; // @[RegFiles.scala 17:28]
  reg [63:0] registers_20; // @[RegFiles.scala 17:28]
  reg [63:0] registers_21; // @[RegFiles.scala 17:28]
  reg [63:0] registers_22; // @[RegFiles.scala 17:28]
  reg [63:0] registers_23; // @[RegFiles.scala 17:28]
  reg [63:0] registers_24; // @[RegFiles.scala 17:28]
  reg [63:0] registers_25; // @[RegFiles.scala 17:28]
  reg [63:0] registers_26; // @[RegFiles.scala 17:28]
  reg [63:0] registers_27; // @[RegFiles.scala 17:28]
  reg [63:0] registers_28; // @[RegFiles.scala 17:28]
  reg [63:0] registers_29; // @[RegFiles.scala 17:28]
  reg [63:0] registers_30; // @[RegFiles.scala 17:28]
  reg [63:0] registers_31; // @[RegFiles.scala 17:28]
  wire [63:0] _GEN_1 = 5'h1 == io_rs1 ? $signed(registers_1) : $signed(registers_0); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_2 = 5'h2 == io_rs1 ? $signed(registers_2) : $signed(_GEN_1); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_3 = 5'h3 == io_rs1 ? $signed(registers_3) : $signed(_GEN_2); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_4 = 5'h4 == io_rs1 ? $signed(registers_4) : $signed(_GEN_3); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_5 = 5'h5 == io_rs1 ? $signed(registers_5) : $signed(_GEN_4); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_6 = 5'h6 == io_rs1 ? $signed(registers_6) : $signed(_GEN_5); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_7 = 5'h7 == io_rs1 ? $signed(registers_7) : $signed(_GEN_6); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_8 = 5'h8 == io_rs1 ? $signed(registers_8) : $signed(_GEN_7); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_9 = 5'h9 == io_rs1 ? $signed(registers_9) : $signed(_GEN_8); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_10 = 5'ha == io_rs1 ? $signed(registers_10) : $signed(_GEN_9); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_11 = 5'hb == io_rs1 ? $signed(registers_11) : $signed(_GEN_10); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_12 = 5'hc == io_rs1 ? $signed(registers_12) : $signed(_GEN_11); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_13 = 5'hd == io_rs1 ? $signed(registers_13) : $signed(_GEN_12); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_14 = 5'he == io_rs1 ? $signed(registers_14) : $signed(_GEN_13); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_15 = 5'hf == io_rs1 ? $signed(registers_15) : $signed(_GEN_14); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_16 = 5'h10 == io_rs1 ? $signed(registers_16) : $signed(_GEN_15); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_17 = 5'h11 == io_rs1 ? $signed(registers_17) : $signed(_GEN_16); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_18 = 5'h12 == io_rs1 ? $signed(registers_18) : $signed(_GEN_17); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_19 = 5'h13 == io_rs1 ? $signed(registers_19) : $signed(_GEN_18); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_20 = 5'h14 == io_rs1 ? $signed(registers_20) : $signed(_GEN_19); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_21 = 5'h15 == io_rs1 ? $signed(registers_21) : $signed(_GEN_20); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_22 = 5'h16 == io_rs1 ? $signed(registers_22) : $signed(_GEN_21); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_23 = 5'h17 == io_rs1 ? $signed(registers_23) : $signed(_GEN_22); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_24 = 5'h18 == io_rs1 ? $signed(registers_24) : $signed(_GEN_23); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_25 = 5'h19 == io_rs1 ? $signed(registers_25) : $signed(_GEN_24); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_26 = 5'h1a == io_rs1 ? $signed(registers_26) : $signed(_GEN_25); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_27 = 5'h1b == io_rs1 ? $signed(registers_27) : $signed(_GEN_26); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_28 = 5'h1c == io_rs1 ? $signed(registers_28) : $signed(_GEN_27); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_29 = 5'h1d == io_rs1 ? $signed(registers_29) : $signed(_GEN_28); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_30 = 5'h1e == io_rs1 ? $signed(registers_30) : $signed(_GEN_29); // @[RegFiles.scala 21:{16,16}]
  wire [63:0] _GEN_33 = 5'h1 == io_rs2 ? $signed(registers_1) : $signed(registers_0); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_34 = 5'h2 == io_rs2 ? $signed(registers_2) : $signed(_GEN_33); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_35 = 5'h3 == io_rs2 ? $signed(registers_3) : $signed(_GEN_34); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_36 = 5'h4 == io_rs2 ? $signed(registers_4) : $signed(_GEN_35); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_37 = 5'h5 == io_rs2 ? $signed(registers_5) : $signed(_GEN_36); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_38 = 5'h6 == io_rs2 ? $signed(registers_6) : $signed(_GEN_37); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_39 = 5'h7 == io_rs2 ? $signed(registers_7) : $signed(_GEN_38); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_40 = 5'h8 == io_rs2 ? $signed(registers_8) : $signed(_GEN_39); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_41 = 5'h9 == io_rs2 ? $signed(registers_9) : $signed(_GEN_40); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_42 = 5'ha == io_rs2 ? $signed(registers_10) : $signed(_GEN_41); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_43 = 5'hb == io_rs2 ? $signed(registers_11) : $signed(_GEN_42); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_44 = 5'hc == io_rs2 ? $signed(registers_12) : $signed(_GEN_43); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_45 = 5'hd == io_rs2 ? $signed(registers_13) : $signed(_GEN_44); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_46 = 5'he == io_rs2 ? $signed(registers_14) : $signed(_GEN_45); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_47 = 5'hf == io_rs2 ? $signed(registers_15) : $signed(_GEN_46); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_48 = 5'h10 == io_rs2 ? $signed(registers_16) : $signed(_GEN_47); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_49 = 5'h11 == io_rs2 ? $signed(registers_17) : $signed(_GEN_48); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_50 = 5'h12 == io_rs2 ? $signed(registers_18) : $signed(_GEN_49); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_51 = 5'h13 == io_rs2 ? $signed(registers_19) : $signed(_GEN_50); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_52 = 5'h14 == io_rs2 ? $signed(registers_20) : $signed(_GEN_51); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_53 = 5'h15 == io_rs2 ? $signed(registers_21) : $signed(_GEN_52); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_54 = 5'h16 == io_rs2 ? $signed(registers_22) : $signed(_GEN_53); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_55 = 5'h17 == io_rs2 ? $signed(registers_23) : $signed(_GEN_54); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_56 = 5'h18 == io_rs2 ? $signed(registers_24) : $signed(_GEN_55); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_57 = 5'h19 == io_rs2 ? $signed(registers_25) : $signed(_GEN_56); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_58 = 5'h1a == io_rs2 ? $signed(registers_26) : $signed(_GEN_57); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_59 = 5'h1b == io_rs2 ? $signed(registers_27) : $signed(_GEN_58); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_60 = 5'h1c == io_rs2 ? $signed(registers_28) : $signed(_GEN_59); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_61 = 5'h1d == io_rs2 ? $signed(registers_29) : $signed(_GEN_60); // @[RegFiles.scala 22:{16,16}]
  wire [63:0] _GEN_62 = 5'h1e == io_rs2 ? $signed(registers_30) : $signed(_GEN_61); // @[RegFiles.scala 22:{16,16}]
  assign io_r_data1 = 5'h1f == io_rs1 ? $signed(registers_31) : $signed(_GEN_30); // @[RegFiles.scala 21:{16,16}]
  assign io_r_data2 = 5'h1f == io_rs2 ? $signed(registers_31) : $signed(_GEN_62); // @[RegFiles.scala 22:{16,16}]
  always @(posedge clock) begin
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_0 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h0 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_0 <= io_w_data; // @[RegFiles.scala 26:30]
        end else begin
          registers_0 <= 64'sh0; // @[RegFiles.scala 19:18]
        end
      end else begin
        registers_0 <= 64'sh0; // @[RegFiles.scala 19:18]
      end
    end else begin
      registers_0 <= 64'sh0; // @[RegFiles.scala 19:18]
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_1 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_1 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_2 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h2 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_2 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_3 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h3 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_3 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_4 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h4 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_4 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_5 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h5 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_5 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_6 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h6 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_6 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_7 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h7 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_7 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_8 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h8 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_8 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_9 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h9 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_9 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_10 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'ha == io_rd) begin // @[RegFiles.scala 26:30]
          registers_10 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_11 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'hb == io_rd) begin // @[RegFiles.scala 26:30]
          registers_11 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_12 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'hc == io_rd) begin // @[RegFiles.scala 26:30]
          registers_12 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_13 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'hd == io_rd) begin // @[RegFiles.scala 26:30]
          registers_13 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_14 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'he == io_rd) begin // @[RegFiles.scala 26:30]
          registers_14 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_15 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'hf == io_rd) begin // @[RegFiles.scala 26:30]
          registers_15 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_16 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h10 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_16 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_17 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h11 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_17 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_18 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h12 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_18 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_19 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h13 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_19 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_20 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h14 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_20 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_21 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h15 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_21 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_22 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h16 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_22 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_23 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h17 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_23 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_24 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h18 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_24 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_25 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h19 == io_rd) begin // @[RegFiles.scala 26:30]
          registers_25 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_26 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1a == io_rd) begin // @[RegFiles.scala 26:30]
          registers_26 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_27 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1b == io_rd) begin // @[RegFiles.scala 26:30]
          registers_27 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_28 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1c == io_rd) begin // @[RegFiles.scala 26:30]
          registers_28 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_29 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1d == io_rd) begin // @[RegFiles.scala 26:30]
          registers_29 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_30 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1e == io_rd) begin // @[RegFiles.scala 26:30]
          registers_30 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
    if (reset) begin // @[RegFiles.scala 17:28]
      registers_31 <= 64'sh0; // @[RegFiles.scala 17:28]
    end else if (io_reg_write) begin // @[RegFiles.scala 23:32]
      if (io_rd != 5'h0) begin // @[RegFiles.scala 25:36]
        if (5'h1f == io_rd) begin // @[RegFiles.scala 26:30]
          registers_31 <= io_w_data; // @[RegFiles.scala 26:30]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  registers_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  registers_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  registers_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  registers_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  registers_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  registers_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  registers_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  registers_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  registers_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  registers_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  registers_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  registers_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  registers_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  registers_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  registers_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  registers_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  registers_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  registers_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  registers_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  registers_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  registers_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  registers_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  registers_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  registers_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  registers_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  registers_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  registers_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  registers_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  registers_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  registers_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  registers_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  registers_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Alu(
  input  [63:0] io_oper_a,
  input  [63:0] io_oper_b,
  input  [4:0]  io_alu_ctrl,
  output [63:0] io_result,
  output        io_zero
);
  wire [63:0] _res_T_1 = $signed(io_oper_a) & $signed(io_oper_b); // @[Alu.scala 18:42]
  wire [63:0] _res_T_3 = $signed(io_oper_a) | $signed(io_oper_b); // @[Alu.scala 19:42]
  wire [63:0] _res_T_6 = $signed(io_oper_a) + $signed(io_oper_b); // @[Alu.scala 20:42]
  wire [63:0] _res_T_9 = $signed(io_oper_a) - $signed(io_oper_b); // @[Alu.scala 21:42]
  wire [63:0] _GEN_0 = 5'h6 == io_alu_ctrl ? $signed(_res_T_9) : $signed(64'sh0); // @[Alu.scala 17:25 21:29 16:9]
  wire [63:0] _GEN_1 = 5'h2 == io_alu_ctrl ? $signed(_res_T_6) : $signed(_GEN_0); // @[Alu.scala 17:25 20:29]
  wire [63:0] _GEN_2 = 5'h1 == io_alu_ctrl ? $signed(_res_T_3) : $signed(_GEN_1); // @[Alu.scala 17:25 19:29]
  wire [63:0] res = 5'h0 == io_alu_ctrl ? $signed(_res_T_1) : $signed(_GEN_2); // @[Alu.scala 17:25 18:29]
  assign io_result = 5'h0 == io_alu_ctrl ? $signed(_res_T_1) : $signed(_GEN_2); // @[Alu.scala 17:25 18:29]
  assign io_zero = $signed(res) == 64'sh0; // @[Alu.scala 23:14]
endmodule
module AluCtrl(
  input  [1:0] io_alu_op,
  input  [2:0] io_fun3,
  input        io_fun7,
  output [3:0] io_alu_ctrl
);
  wire [3:0] _io_alu_ctrl_T = {1'h0,io_fun7,2'h2}; // @[Cat.scala 31:58]
  wire [3:0] _GEN_0 = 3'h0 == io_fun3 ? _io_alu_ctrl_T : 4'h0; // @[AluCtrl.scala 13:17 18:28 21:42]
  wire [3:0] _GEN_1 = 3'h6 == io_fun3 ? 4'h1 : _GEN_0; // @[AluCtrl.scala 18:28 20:42]
  wire [3:0] _GEN_2 = 3'h7 == io_fun3 ? 4'h0 : _GEN_1; // @[AluCtrl.scala 18:28 19:42]
  wire [3:0] _GEN_3 = 2'h2 == io_alu_op ? _GEN_2 : 4'h0; // @[AluCtrl.scala 13:17 14:23]
  wire [3:0] _GEN_4 = 2'h1 == io_alu_op ? 4'h6 : _GEN_3; // @[AluCtrl.scala 14:23 16:35]
  assign io_alu_ctrl = 2'h0 == io_alu_op ? 4'h2 : _GEN_4; // @[AluCtrl.scala 14:23 15:35]
endmodule
module Ctrl(
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
module ImmGen(
  input  [31:0] io_instruction,
  output [63:0] io_i_imm,
  output [63:0] io_s_imm,
  output [63:0] io_b_imm,
  output [63:0] io_u_imm,
  output [63:0] io_j_imm
);
  wire [11:0] i_imm_12 = io_instruction[31:20]; // @[ImmGen.scala 15:34]
  wire [51:0] _i_imm_32_T_2 = i_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [4:0] s_lower_half = io_instruction[11:7]; // @[ImmGen.scala 20:38]
  wire [6:0] s_upper_half = io_instruction[31:25]; // @[ImmGen.scala 21:38]
  wire [11:0] s_imm_12 = {s_upper_half,s_lower_half}; // @[Cat.scala 31:58]
  wire [51:0] _s_imm_64_T_2 = s_imm_12[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [3:0] sb_lower_half = io_instruction[11:8]; // @[ImmGen.scala 27:39]
  wire [5:0] sb_upper_half = io_instruction[30:25]; // @[ImmGen.scala 28:39]
  wire  sb_11thbit = io_instruction[7]; // @[ImmGen.scala 29:36]
  wire  sb_12thbit = io_instruction[31]; // @[ImmGen.scala 30:36]
  wire [12:0] sb_imm_13 = {sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[Cat.scala 31:58]
  wire [50:0] _sb_imm_64_T_2 = sb_imm_13[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 74:12]
  wire [19:0] u_imm_20 = io_instruction[31:12]; // @[ImmGen.scala 36:34]
  wire [43:0] _u_imm_64_T_2 = u_imm_20[19] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] u_imm_64 = {_u_imm_64_T_2,u_imm_20}; // @[Cat.scala 31:58]
  wire [75:0] _GEN_0 = {u_imm_64, 12'h0}; // @[ImmGen.scala 39:37]
  wire [78:0] _io_u_imm_T = {{3'd0}, _GEN_0}; // @[ImmGen.scala 40:34]
  wire [9:0] uj_lower_half = io_instruction[30:21]; // @[ImmGen.scala 43:39]
  wire  uj_11thbit = io_instruction[20]; // @[ImmGen.scala 44:36]
  wire [7:0] uj_upper_half = io_instruction[19:12]; // @[ImmGen.scala 45:39]
  wire [20:0] uj_imm_21 = {sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[Cat.scala 31:58]
  wire [42:0] _uj_imm_64_T_2 = uj_imm_21[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 74:12]
  assign io_i_imm = {_i_imm_32_T_2,i_imm_12}; // @[ImmGen.scala 17:26]
  assign io_s_imm = {_s_imm_64_T_2,s_upper_half,s_lower_half}; // @[ImmGen.scala 24:26]
  assign io_b_imm = {_sb_imm_64_T_2,sb_12thbit,sb_11thbit,sb_upper_half,sb_lower_half,1'h0}; // @[ImmGen.scala 32:61]
  assign io_u_imm = _io_u_imm_T[63:0]; // @[ImmGen.scala 40:14]
  assign io_j_imm = {_uj_imm_64_T_2,sb_12thbit,uj_upper_half,uj_11thbit,uj_lower_half,1'h0}; // @[ImmGen.scala 49:27]
endmodule
module DataMem(
  input         clock,
  input         io_mem_write,
  input         io_mem_read,
  input  [9:0]  io_address,
  input  [63:0] io_write_data,
  output [63:0] io_read_data
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] mem [0:1023]; // @[DataMem.scala 16:18]
  wire  mem_io_read_data_MPORT_en; // @[DataMem.scala 16:18]
  wire [9:0] mem_io_read_data_MPORT_addr; // @[DataMem.scala 16:18]
  wire [63:0] mem_io_read_data_MPORT_data; // @[DataMem.scala 16:18]
  wire [63:0] mem_MPORT_data; // @[DataMem.scala 16:18]
  wire [9:0] mem_MPORT_addr; // @[DataMem.scala 16:18]
  wire  mem_MPORT_mask; // @[DataMem.scala 16:18]
  wire  mem_MPORT_en; // @[DataMem.scala 16:18]
  wire  _T_1 = ~io_mem_read; // @[DataMem.scala 18:49]
  wire  _T_2 = io_mem_write & ~io_mem_read; // @[DataMem.scala 18:34]
  assign mem_io_read_data_MPORT_en = _T_2 ? 1'h0 : 1'h1;
  assign mem_io_read_data_MPORT_addr = io_address;
  assign mem_io_read_data_MPORT_data = mem[mem_io_read_data_MPORT_addr]; // @[DataMem.scala 16:18]
  assign mem_MPORT_data = io_write_data;
  assign mem_MPORT_addr = io_address;
  assign mem_MPORT_mask = 1'h1;
  assign mem_MPORT_en = io_mem_write & _T_1;
  assign io_read_data = mem_io_read_data_MPORT_data; // @[DataMem.scala 18:60 24:22]
  always @(posedge clock) begin
    if (mem_MPORT_en & mem_MPORT_mask) begin
      mem[mem_MPORT_addr] <= mem_MPORT_data; // @[DataMem.scala 16:18]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input         clock,
  input         reset,
  output [63:0] io_reg_out
);
  wire  pc_clock; // @[Top.scala 11:20]
  wire  pc_reset; // @[Top.scala 11:20]
  wire [63:0] pc_io_in; // @[Top.scala 11:20]
  wire [63:0] pc_io_out; // @[Top.scala 11:20]
  wire [63:0] pc_io_pc4; // @[Top.scala 11:20]
  wire  imem_clock; // @[Top.scala 12:22]
  wire [9:0] imem_io_address; // @[Top.scala 12:22]
  wire [31:0] imem_io_inst; // @[Top.scala 12:22]
  wire  reg_files_clock; // @[Top.scala 13:27]
  wire  reg_files_reset; // @[Top.scala 13:27]
  wire  reg_files_io_reg_write; // @[Top.scala 13:27]
  wire [4:0] reg_files_io_rs1; // @[Top.scala 13:27]
  wire [4:0] reg_files_io_rs2; // @[Top.scala 13:27]
  wire [4:0] reg_files_io_rd; // @[Top.scala 13:27]
  wire [63:0] reg_files_io_w_data; // @[Top.scala 13:27]
  wire [63:0] reg_files_io_r_data1; // @[Top.scala 13:27]
  wire [63:0] reg_files_io_r_data2; // @[Top.scala 13:27]
  wire [63:0] alu_io_oper_a; // @[Top.scala 14:21]
  wire [63:0] alu_io_oper_b; // @[Top.scala 14:21]
  wire [4:0] alu_io_alu_ctrl; // @[Top.scala 14:21]
  wire [63:0] alu_io_result; // @[Top.scala 14:21]
  wire  alu_io_zero; // @[Top.scala 14:21]
  wire [1:0] alu_ctrl_io_alu_op; // @[Top.scala 15:26]
  wire [2:0] alu_ctrl_io_fun3; // @[Top.scala 15:26]
  wire  alu_ctrl_io_fun7; // @[Top.scala 15:26]
  wire [3:0] alu_ctrl_io_alu_ctrl; // @[Top.scala 15:26]
  wire [31:0] ctrl_io_inst; // @[Top.scala 16:22]
  wire  ctrl_io_alu_src; // @[Top.scala 16:22]
  wire  ctrl_io_mem_to_reg; // @[Top.scala 16:22]
  wire  ctrl_io_reg_write; // @[Top.scala 16:22]
  wire  ctrl_io_mem_read; // @[Top.scala 16:22]
  wire  ctrl_io_mem_write; // @[Top.scala 16:22]
  wire  ctrl_io_branch; // @[Top.scala 16:22]
  wire [1:0] ctrl_io_alu_op; // @[Top.scala 16:22]
  wire [31:0] imm_gen_io_instruction; // @[Top.scala 17:25]
  wire [63:0] imm_gen_io_i_imm; // @[Top.scala 17:25]
  wire [63:0] imm_gen_io_s_imm; // @[Top.scala 17:25]
  wire [63:0] imm_gen_io_b_imm; // @[Top.scala 17:25]
  wire [63:0] imm_gen_io_u_imm; // @[Top.scala 17:25]
  wire [63:0] imm_gen_io_j_imm; // @[Top.scala 17:25]
  wire  dmem_clock; // @[Top.scala 18:22]
  wire  dmem_io_mem_write; // @[Top.scala 18:22]
  wire  dmem_io_mem_read; // @[Top.scala 18:22]
  wire [9:0] dmem_io_address; // @[Top.scala 18:22]
  wire [63:0] dmem_io_write_data; // @[Top.scala 18:22]
  wire [63:0] dmem_io_read_data; // @[Top.scala 18:22]
  wire [63:0] _GEN_0 = imem_io_inst[6:0] == 7'h37 ? $signed(imm_gen_io_u_imm) : $signed(64'sh0); // @[Top.scala 62:50 63:13 65:13]
  wire [63:0] _GEN_1 = imem_io_inst[6:0] == 7'h17 ? $signed(imm_gen_io_u_imm) : $signed(_GEN_0); // @[Top.scala 60:50 61:13]
  wire [63:0] _GEN_2 = imem_io_inst[6:0] == 7'h6f ? $signed(imm_gen_io_j_imm) : $signed(_GEN_1); // @[Top.scala 58:50 59:13]
  wire [63:0] _GEN_3 = imem_io_inst[6:0] == 7'h63 ? $signed(imm_gen_io_b_imm) : $signed(_GEN_2); // @[Top.scala 56:50 57:13]
  wire [63:0] _GEN_4 = imem_io_inst[6:0] == 7'h23 ? $signed(imm_gen_io_s_imm) : $signed(_GEN_3); // @[Top.scala 54:50 55:13]
  wire [63:0] _GEN_5 = imem_io_inst[6:0] == 7'h13 ? $signed(imm_gen_io_i_imm) : $signed(_GEN_4); // @[Top.scala 52:50 53:13]
  wire [63:0] imm = imem_io_inst[6:0] == 7'h3 ? $signed(imm_gen_io_i_imm) : $signed(_GEN_5); // @[Top.scala 50:44 51:13]
  wire [63:0] _pc_io_in_T_2 = $signed(pc_io_out) + $signed(imm); // @[Top.scala 75:31]
  Pc pc ( // @[Top.scala 11:20]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4)
  );
  InstMem imem ( // @[Top.scala 12:22]
    .clock(imem_clock),
    .io_address(imem_io_address),
    .io_inst(imem_io_inst)
  );
  RegFiles reg_files ( // @[Top.scala 13:27]
    .clock(reg_files_clock),
    .reset(reg_files_reset),
    .io_reg_write(reg_files_io_reg_write),
    .io_rs1(reg_files_io_rs1),
    .io_rs2(reg_files_io_rs2),
    .io_rd(reg_files_io_rd),
    .io_w_data(reg_files_io_w_data),
    .io_r_data1(reg_files_io_r_data1),
    .io_r_data2(reg_files_io_r_data2)
  );
  Alu alu ( // @[Top.scala 14:21]
    .io_oper_a(alu_io_oper_a),
    .io_oper_b(alu_io_oper_b),
    .io_alu_ctrl(alu_io_alu_ctrl),
    .io_result(alu_io_result),
    .io_zero(alu_io_zero)
  );
  AluCtrl alu_ctrl ( // @[Top.scala 15:26]
    .io_alu_op(alu_ctrl_io_alu_op),
    .io_fun3(alu_ctrl_io_fun3),
    .io_fun7(alu_ctrl_io_fun7),
    .io_alu_ctrl(alu_ctrl_io_alu_ctrl)
  );
  Ctrl ctrl ( // @[Top.scala 16:22]
    .io_inst(ctrl_io_inst),
    .io_alu_src(ctrl_io_alu_src),
    .io_mem_to_reg(ctrl_io_mem_to_reg),
    .io_reg_write(ctrl_io_reg_write),
    .io_mem_read(ctrl_io_mem_read),
    .io_mem_write(ctrl_io_mem_write),
    .io_branch(ctrl_io_branch),
    .io_alu_op(ctrl_io_alu_op)
  );
  ImmGen imm_gen ( // @[Top.scala 17:25]
    .io_instruction(imm_gen_io_instruction),
    .io_i_imm(imm_gen_io_i_imm),
    .io_s_imm(imm_gen_io_s_imm),
    .io_b_imm(imm_gen_io_b_imm),
    .io_u_imm(imm_gen_io_u_imm),
    .io_j_imm(imm_gen_io_j_imm)
  );
  DataMem dmem ( // @[Top.scala 18:22]
    .clock(dmem_clock),
    .io_mem_write(dmem_io_mem_write),
    .io_mem_read(dmem_io_mem_read),
    .io_address(dmem_io_address),
    .io_write_data(dmem_io_write_data),
    .io_read_data(dmem_io_read_data)
  );
  assign io_reg_out = reg_files_io_r_data1; // @[Top.scala 77:16]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = alu_io_zero & ctrl_io_branch ? $signed(_pc_io_in_T_2) : $signed(pc_io_pc4); // @[Top.scala 23:14 74:58 75:18]
  assign imem_clock = clock;
  assign imem_io_address = pc_io_out[11:2]; // @[Top.scala 21:33]
  assign reg_files_clock = clock;
  assign reg_files_reset = reset;
  assign reg_files_io_reg_write = ctrl_io_reg_write; // @[Top.scala 36:28]
  assign reg_files_io_rs1 = imem_io_inst[19:15]; // @[Top.scala 37:36]
  assign reg_files_io_rs2 = imem_io_inst[24:20]; // @[Top.scala 38:36]
  assign reg_files_io_rd = imem_io_inst[11:7]; // @[Top.scala 39:35]
  assign reg_files_io_w_data = ctrl_io_mem_to_reg ? $signed(dmem_io_read_data) : $signed(alu_io_result); // @[Top.scala 41:31]
  assign alu_io_oper_a = reg_files_io_r_data1; // @[Top.scala 69:19]
  assign alu_io_oper_b = ctrl_io_alu_src ? $signed(imm) : $signed(reg_files_io_r_data2); // @[Top.scala 70:25]
  assign alu_io_alu_ctrl = {{1'd0}, alu_ctrl_io_alu_ctrl}; // @[Top.scala 71:21]
  assign alu_ctrl_io_alu_op = ctrl_io_alu_op; // @[Top.scala 30:24]
  assign alu_ctrl_io_fun3 = imem_io_inst[14:12]; // @[Top.scala 31:36]
  assign alu_ctrl_io_fun7 = imem_io_inst[30]; // @[Top.scala 32:36]
  assign ctrl_io_inst = imem_io_inst; // @[Top.scala 26:18]
  assign imm_gen_io_instruction = imem_io_inst; // @[Top.scala 27:28]
  assign dmem_clock = clock;
  assign dmem_io_mem_write = ctrl_io_mem_write; // @[Top.scala 43:23]
  assign dmem_io_mem_read = ctrl_io_mem_read; // @[Top.scala 44:22]
  assign dmem_io_address = alu_io_result[11:2]; // @[Top.scala 45:37]
  assign dmem_io_write_data = reg_files_io_r_data2; // @[Top.scala 46:24]
endmodule
