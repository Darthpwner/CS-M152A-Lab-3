`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:01 02/09/2015 
// Design Name: 
// Module Name:    clock_devider 
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
module clock_devider(
    input clk100MHz,
    output reg clk1Hz = 0,          //We need to 4 clock frequency
    output reg clk2Hz = 0,            
    output reg clk500Hz = 0,
    output reg display_clock = 0
    );
	 /*
	 
	 To produce the four different clocks, 1Hz, 2Hz, 4Hz, 500Hz. 
	 We slow the master clock (100MHz) down with internal counter implemented. 
	 We set the maximum count for each clock, and once the maximum count is reached, 
	 the clock goes from 1 to 0 or 0 to 1. The maximum count is calculated 
	 by "maximum=master clock/(2*desired_clk)"
     For example, 100000000/(2*1)=50000000, which is the maximum count for 1Hz clock. 

	 */
	//reg clk100MHz;
//	clk1Hz = 0;
//	clk2Hz = 0;
//	clk500Hz = 0;
//	display_clock = 0;
	
	reg [32:0] counter1hz = 0;        //the counter for the 1hz
	reg [32:0] counter2hz = 0;        //the counter for the 2hz
	reg [32:0] counter500hz = 0;      //the counter for the 50hz
	reg [32:0] counterblink = 0;      //the counter for the blink

	always @(posedge clk100MHz)          //the main clock
		begin
			counter1hz <= counter1hz + 1;            //we increment all the counter
			counter2hz <= counter2hz + 1;
			counter500hz <= counter500hz +1;
			counterblink <= counterblink +1;
			                            //By the formular maximum=master clock/(2*desired_clk)
												                   //100000000/(2*1)=50000000
			if (counter1hz == 'd50000000)	//50000000             //If the we hit the max for the 1Hz
				begin                                
				clk1Hz <= !clk1Hz;
				counter1hz <= 0;                    //once the maximum count is reached, 
				                                    //the clock goes from 1 to 0 or 0 to 1. 
				end                         //100000000/(2*2)=25000000
			if (counter2hz == 'd25000000) // 25000000
				begin
				clk2Hz <= !clk2Hz;
				counter2hz <= 0;
				end
			if (counter500hz == 'd100000 )   //100000000/(2*500)=100000
				begin                                    
				clk500Hz <= !clk500Hz;          //once the maximum count is reached, 
				                                    //the clock goes from 1 to 0 or 0 to 1.
				counter500hz <= 0;
				end
			if (counterblink == 'd10000000)      //10000000
				begin
				display_clock <= !display_clock;
				counterblink <= 0;
				end
		end
		


endmodule
