`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:28:34 02/15/2015
// Design Name:   fsm
// Module Name:   C:/Users/Tinh Lac/Desktop/lab3_tinh/lab3_tinh/tbfsm.v
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

module tbfsm;

	// Inputs
	reg clk;
	reg sel;
	reg rst;
	reg adj;
	reg pause;

	// Outputs
	wire [2:0] state;
	wire clkout500Hz;
	wire clkout;
	wire clkoutadj;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.clk(clk), 
		.sel(sel), 
		.rst(rst), 
		.adj(adj), 
		.pause(pause), 
		.state(state), 
		.clkout500Hz(clkout500Hz), 
		.clkout(clkout), 
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
		#10;
        
		// Add stimulus here
		#1550 rst = 1;
		

	end
	always #5 clk = !clk;
   
//	initial #100000000 $finish;
endmodule

