
module mem_fifo(clk, rst, in, wr, out);
  parameter WIDTH = 8;
  //parameter DEPTH = 32;

  input [WIDTH-1:0] in;
  input clk, rst, wr;
  output [WIDTH-1:0] out;


  reg [WIDTH-1:0] r0 ;
  reg [WIDTH-1:0] r1 ;
  //reg [WIDTH-1:0] r2 ;
  //reg [WIDTH-1:0] r3 ;
  //reg [WIDTH-1:0] r4 ;
  //reg [WIDTH-1:0] r5 ;

  assign out = r1;

  always @(posedge clk) begin
    if(rst) begin
      r0 <= 0;  
      r1 <= 0;  
      //r2 <= 0;  
      //r3 <= 0;  
      //r4 <= 0;  
      //r5 <= 0;  
    end
    else if (wr) begin
      r0 <= in ;
      r1 <= r0 ;
      //r2 <= r1 ;
      //r3 <= r2 ;
      //r4 <= r3 ;
      //r5 <= r4 ;
     end
  end

endmodule
