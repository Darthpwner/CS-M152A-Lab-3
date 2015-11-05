`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:05:54 02/11/2015
// Design Name:   project3
// Module Name:   C:/Users/152/Downloads/lab3_tinh/lab3_tinh/test_project3.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: project3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_project3;

	// Inputs
	reg clk;
	reg sel;
	reg adj;
	reg pause;
	reg rst;

	// Outputs
	wire [3:0] sec_1;
	wire [3:0] sec_2;
	wire [3:0] min_1;
	wire [3:0] min_2;

	// Instantiate the Unit Under Test (UUT)
	project3 uut (
		.clk(clk), 
		.sel(sel), 
		.adj(adj), 
		.pause(pause), 
		.rst(rst), 
		.sec_1(sec_1), 
		.sec_2(sec_2), 
		.min_1(min_1), 
		.min_2(min_2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sel = 1;
		adj = 1;
		pause = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		//adj = 1;
	end
      always #1 clk = !clk;
endmodule

