module DataMem(
  input         clock,
  input         reset,
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
