`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:20 02/11/2015 
// Design Name: 
// Module Name:    project3 
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
module project3(
    input clk,
    input sel,
    input adj,
    input pause,
    input rst,
    output [3:0]sec_1,
    output [3:0]sec_2,
    output [3:0]min_1,
    output [3:0]min_2
    );
	 wire clkout500Hz;
	 wire clkout;
	 wire clkoutblinking;
//	 reg clkout1Hz;
//	 reg clkout2Hz;
	wire [2:0] cur_state;
	
	
	counter ct (.state(cur_state), .clk(clkout), .sec_1(sec_1), .sec_2(sec_2), .min_1(min_1), .min_2(min_2));
	fsm statemachine (.clk(clk),.sel(sel),.rst(rst),.adj(adj),.pause(pause), .clkout500Hz(clkout500Hz),
							.cur_state(cur_state),.clkout(clkout), .clkoutadj(clkoutblinking));
	
	
endmodule
