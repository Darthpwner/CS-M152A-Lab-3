`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:27:15 02/11/2015
// Design Name:   fsm
// Module Name:   C:/Users/152/Downloads/lab3_tinh/lab3_tinh/teststate.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module teststate;

	// Inputs
	reg clk;
	reg sel;
	reg rst;
	reg adj;
	reg pause;

	// Outputs
	wire clkout500Hz;
	wire [3:0] sec_1;
	wire [3:0] sec_2;
	wire [3:0] min_1;
	wire [3:0] min_2;
	wire clkoutadj;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.clk(clk), 
		.sel(sel), 
		.rst(rst), 
		.adj(adj), 
		.pause(pause), 
		.clkout500Hz(clkout500Hz), 
		.sec_1(sec_1), 
		.sec_2(sec_2), 
		.min_1(min_1), 
		.min_2(min_2), 
		.clkoutadj(clkoutadj)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sel = 0;
		rst = 0;
		adj = 0;
		pause = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
		// Add stimulus here
		adj = 1;
		sel = 1;
	end
      always #5 clk = ~clk;
endmodule

