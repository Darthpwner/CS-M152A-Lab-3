`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:19 02/09/2015 
// Design Name: 
// Module Name:    tbclockdv 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module tbclockdv(
    );
	 
	 
	 reg clk100MHz = 0;
    wire clk1Hz;
    wire clk2Hz;
    wire clk500Hz;
    wire display_clock;
	 
	 clock_devider c(.clk100MHz(clk100MHz), .clk1Hz(clk1Hz), .clk2Hz(clk2Hz), .clk500Hz(clk500Hz),
							.display_clock(display_clock));
	 
	always
		begin
			#5 clk100MHz = !clk100MHz;
		end
	

endmodule
