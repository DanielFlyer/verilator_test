`include "./picorv32_pc.v"
`include "./mem_fifo.v"
module top(
	input clk, resetn,
	output reg trap,

	output reg        mem_valid_fifo,
	output reg        mem_instr_fifo,
	input             mem_ready,

	output reg [31:0] mem_addr_fifo,
	output reg [31:0] mem_wdata_fifo,
	output reg [ 3:0] mem_wstrb_fifo,
	output reg [31:0] pc_fifo,  
	input      [31:0] mem_rdata,

	// IRQ Interface
	input      [31:0] irq,
	output reg [31:0] eoi,

  // useless output ports
	// Look-Ahead Interface
	output            mem_la_read,
	output            mem_la_write,
	output     [31:0] mem_la_addr,
	output reg [31:0] mem_la_wdata,
	output reg [ 3:0] mem_la_wstrb,

	// Pico Co-Processor Interface (PCPI)
	output            pcpi_valid,
	output     [31:0] pcpi_insn,
	output     [31:0] pcpi_rs1,
	output     [31:0] pcpi_rs2,
	input             pcpi_wr,
	input      [31:0] pcpi_rd,
	input             pcpi_wait,
	input             pcpi_ready,
  
	output reg        trace_valid,
	output reg [35:0] trace_data

  //input !resetn_in
);

  //wire zy_rst = ! resetn || zy_rsr;
  wire mem_valid;
  wire mem_instr;
  wire [31:0] mem_addr;
  wire [31:0] mem_wdata;
  wire [ 3:0] mem_wstrb;
  wire [31:0] pc_out;


  picorv32 u0 (
    .clk          (clk      ),   
    .resetn       (resetn   ),
    .mem_ready    (mem_ready),
    .mem_rdata    (mem_rdata),
    .irq          (irq      ),
                           
    .trap         (trap     ),
    .mem_valid    (mem_valid),
    .mem_instr    (mem_instr),
    .mem_addr     (mem_addr ),
    .mem_wdata    (mem_wdata),
    .mem_wstrb    (mem_wstrb),
    .eoi          (eoi      ),

    .mem_la_read  (mem_la_read ), 
    .mem_la_write (mem_la_write),
    .mem_la_addr  (mem_la_addr ),
    .mem_la_wdata (mem_la_wdata),
    .mem_la_wstrb (mem_la_wstrb),

    .pcpi_valid   (pcpi_valid  ),
    .pcpi_insn    (pcpi_insn   ),
    .pcpi_rs1     (pcpi_rs1    ),
    .pcpi_rs2     (pcpi_rs2    ),
    .pcpi_wr      (pcpi_wr     ),
    .pcpi_rd      (pcpi_rd     ),
    .pcpi_wait    (pcpi_wait   ),
    .pcpi_ready   (pcpi_ready  ),

    .trace_valid  (trace_valid ),
    .trace_data   (trace_data  ),
    .pc_out       (pc_out)
  );


  mem_fifo 
    #(.WIDTH(1))
  fifo_valid (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (mem_valid),
    .wr           (mem_valid),
    .out          (mem_valid_fifo)
  );

  mem_fifo 
    #(.WIDTH(1))
  fifo_instr (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (mem_instr),
    .wr           (mem_valid),
    .out          (mem_instr_fifo)
  );

  mem_fifo 
    #(.WIDTH(32))  
  fifo_addr (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (mem_addr ),
    .wr           (mem_valid),
    .out          (mem_addr_fifo)
  );

  mem_fifo 
    #(.WIDTH(32))  
  fifo_wdata (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (mem_wdata),
    .wr           (mem_valid),
    .out          (mem_wdata_fifo)
  );

  mem_fifo 
    #(.WIDTH(4))  
  fifo_wstrb (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (mem_wstrb),
    .wr           (mem_valid),
    .out          (mem_wstrb_fifo)
  );


  mem_fifo 
    #(.WIDTH(32))  
  fifo_pc (
    .clk          (clk      ),   
    .rst          (!resetn),
    .in           (pc_out),
    .wr           (mem_valid),
    .out          (pc_fifo)
  );

endmodule
