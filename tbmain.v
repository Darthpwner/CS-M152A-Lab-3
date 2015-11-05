`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:30:09 02/15/2015
// Design Name:   main
// Module Name:   C:/Users/Tinh Lac/Desktop/lab3_tinh/lab3_tinh/tbmain.v
// Project Name:  lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tbmain;

	// Inputs
	reg clk;
	reg sel;
	reg adj;
	reg rst;
	reg pause;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.sel(sel), 
		.adj(adj), 
		.rst(rst), 
		.pause(pause)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		sel = 0;
		adj = 0;
		rst = 0;
		pause = 0;

		// Wait 100 ns for global reset to finish
//		#50000000 ;
//       pause = 1;
//		 #1000000;
//		 pause = 0;
//		 #400 pause = 1;
//		 #300 pause = 0;
//		 #400 pause = 1;
//		 #200 pause = 0;
//		 
	//	 #1000;
//       rst = 1;
//		 #500000;
//


//	#50000000 rst = 1;
//	#1000000 rst = 0;
//	#500 rst = 1;
//	#200 rst = 0;
//	
	
//	#10000000 pause = 1;
//	#10000 pause = 0;
//	#30000 pause = 1;
//	#60000 pause = 0;
//	#200 pause = 1;
//	#10000000 pause = 0;
//	#10000000 pause = 1;
//	#10000 pause = 0;
//	#30000 pause = 1;
//	#60000 pause = 0;
//	#200 pause = 1;
//	#10000000 pause = 0;
//	#10000000 pause = 1;
//	#10000 pause = 0;
//	#30000 pause = 1;
//	#60000 pause = 0;
//	#200 pause = 1;
//	#10000000 pause = 0;
//	#10000000 pause = 1;
//	#10000 pause = 0;
//	#30000 pause = 1;
//	#60000 pause = 0;
//	#200 pause = 1;
//	#10000000 pause = 0;
//	
//		 rst = 0;
		 
//		 #400 rst = 1;
//		 #300 rst = 0;
//		 #400 rst = 1;
//		 #200 rst = 0;
//		 
//		 #1040500000;
//		 rst = 1;
//		 #1000000;
//		 rst = 0;
	//	#100;
			//sel = 1;
		
		// Add stimulus here
		
		//#1000500000 pause = 1;
		//#2000000000 pause = 0;
		
		//#1000500000 rst = 1;
		
			
	end
   always #5 clk=!clk;
endmodule

