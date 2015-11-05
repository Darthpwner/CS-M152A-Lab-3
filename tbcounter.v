`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:48:21 02/10/2015
// Design Name:   counter
// Module Name:   C:/Users/152/Downloads/lab3_tinh/lab3_tinh/tbcounter.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tbcounter;

	// Inputs
	reg [2:0] state;
	reg clk;

	// Outputs
	wire [3:0] sec_1;
	wire [3:0] sec_2;
	wire [3:0] min_1;
	wire [3:0] min_2;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.state(state), 
		.clk(clk), 
		.sec_1(sec_1), 
		.sec_2(sec_2), 
		.min_1(min_1), 
		.min_2(min_2)
	);

	initial begin
		// Initialize Inputs
		state = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		state = 3;

	end
	always #5 clk = ~clk;
      
endmodule

