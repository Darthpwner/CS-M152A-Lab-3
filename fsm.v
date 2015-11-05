`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:03 02/09/2015 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input wire clk,
    input sel,
    input rst,
    input adj,
    input pause,
	 output reg [2:0] state,
	 output clkout500Hz,
	 output reg clkout = 0,
	 output clkoutadj 
	 );
	 /*
	 In the FSM module we include our clock divider which generate 4 clocks 
	 (500Hz, 1Hz, 2Hz, and a clock for blinking). FSM module also generates the number 
	 of states that in the state diagram has indicated.
	 */
	 
	 wire clkout1Hz;
	 wire clkout2Hz;
	
	 
    reg [2:0] cur_state = 3'b001;
	 reg [2:0] nxt_state = 3'b001;
	 
	parameter stReset =  3'd0;
	parameter stIncSec = 3'd2;
	parameter stIncMin = 3'd3;
	parameter stPause = 3'd4;
	parameter stNormal = 3'd1;	
	
	                                                             //The four frequency
	clock_devider cd (.clk100MHz(clk), .clk1Hz(clkout1Hz), .clk2Hz(clkout2Hz), .clk500Hz(clkout500Hz), .display_clock(clkoutadj));
	always @(posedge clk)
	begin
		cur_state <= nxt_state;
		state <= nxt_state;
		case(cur_state)
			stNormal:                                      //In the current case
			begin                                //The stopwatch will start to count the number of seconds and minutes in normal mode. 
				if (pause == 1) nxt_state <= stPause;          //If the pause is pressed ->next state
				else if(adj == 1)                                //if adjeust is press->go faster
				begin
					if (sel == 1) nxt_state <= stIncMin;          //Ajust and Min -> Min go faster ->change state
					else nxt_state <= stIncSec;                   //to stIncSec state
				end
			end
			stIncSec:
			begin
				if (pause == 1) nxt_state <= stPause;                   //If pause is press-> stpause state
				else if (adj == 0) nxt_state <= stNormal;               //Ajust is 0 normal state do nothing
				else if(adj == 1)                                         //Ajust is 1
				begin
					if (sel == 1) nxt_state <= stIncMin;                //We need to make the min go faster
					else nxt_state <= stIncSec;                         //go to the stIncSec state
				end
			end
			stIncMin:
			begin
				if (pause == 1) nxt_state <= stPause;                     //If pause is press-> stpause state
				else if (adj == 0) nxt_state <= stNormal;                  //Ajust is 0 normal state do nothing
				else if(adj == 1) 
				begin
					if (sel == 1) nxt_state <= stIncMin;                        
					else nxt_state <= stIncSec;
				end
			end
			stPause: 
			begin
				if (pause == 0)
				begin
					 if (adj == 1)
					begin
						if (sel == 0) nxt_state <= stIncSec;
						else nxt_state <= stIncMin;                    //We need to increment min
					end
					else nxt_state <= stNormal;                   
				end
			//	else nxt_state <= cur_state;
			end	
			default: nxt_state <= stNormal;                              //Normal 
		endcase
		if (cur_state == stReset)                        //If reset
		begin
			clkout <= clkout1Hz;
			state <= stReset;
		end
		 else if (cur_state == stNormal)                //If the current state is normal then??
		begin
			clkout <= clkout1Hz;                           //Clock out at 1Hz 
			state <= stNormal;
		end
		else if (cur_state == stIncSec)                   //If the state is to increment the second
		begin
			clkout <= clkout2Hz;                             //We increment the sec to 2 hz
			state <= stIncSec;
		end
		else if (cur_state == stIncMin)               //Same here
		begin
			clkout <= clkout2Hz;
			state <= stIncMin;
		end
		else if (cur_state == stPause)                    //If the current is Pause
		begin
			clkout <= clkout1Hz;
			state <= stPause;
			end
	end
	
//	
//	always @(posedge clk)
//	begin
//		case(cur_state)
//			stReset:
//			begin
//				if (rst == 0)
//				begin
//					if (pause == 1) nxt_state <= stPause;
//					else if(adj == 1)
//					begin
//						if (sel == 1) nxt_state <= stIncMin;
//						else nxt_state <= stIncSec;
//					end
//					else nxt_state <= stNormal;
//				end
//				else nxt_state <= stReset;
//			end
//			stNormal:
//			begin
//				if (pause == 1) nxt_state <= stPause;
//				else if (rst == 1) nxt_state <= stReset;
//				else if(adj == 1)
//				begin
//					if (sel == 1) nxt_state <= stIncMin;
//					else nxt_state <= stIncSec;
//				end
//			end
//			stIncSec:
//			begin
//				if (pause == 1) nxt_state <= stPause;
//				else if (rst == 1) nxt_state <= stReset;
//				else if (adj == 0) nxt_state <= stNormal;
//				else if(adj == 1)
//				begin
//					if (sel == 1) nxt_state <= stIncMin;
//					else nxt_state <= stIncSec;
//				end
//			end
//			stIncMin:
//			begin
//				if (pause == 1) nxt_state <= stPause;
//				else if (rst == 1) nxt_state <= stReset;
//				else if (adj == 0) nxt_state <= stNormal;
//				else if(adj == 1)
//				begin
//					if (sel == 1) nxt_state <= stIncMin;
//					else nxt_state <= stIncSec;
//				end
//			end
//			stPause: 
//			begin
//				if (pause == 0)
//				begin
//					if (rst == 1) nxt_state <= stReset;
//					else if (adj == 1)
//					begin
//						if (sel == 0) nxt_state <= stIncSec;
//						else nxt_state <= stIncMin;
//					end
//					else nxt_state <= stNormal;
//				end
//			end	
//			default: nxt_state <= cur_state;
//		endcase
//		if (cur_state == stReset)
//		begin
//			clkout <= clkout1Hz;
//			state <= stReset;
//		end
//		 else if (cur_state == stNormal)
//		begin
//			clkout <= clkout1Hz;
//			state <= stNormal;
//		end
//		else if (cur_state == stIncSec)
//		begin
//			clkout <= clkout2Hz;
//			state <= stIncSec;
//		end
//		else if (cur_state == stIncMin)
//		begin
//			clkout <= clkout2Hz;
//			state <= stIncMin;
//		end
//		else if (cur_state == stPause)
//		begin
//			clkout <= clkout1Hz;
//			state <= stPause;
//		end
//	end	

//	always @ (posedge clk)
//	begin
//		if (cur_state == stReset)
//		begin
//			clkout <= clkout1Hz;
//			state <= stReset;
//		end
//		 else if (cur_state == stNormal)
//		begin
//			clkout <= clkout1Hz;
//			state <= stNormal;
//		end
//		else if (cur_state == stIncSec)
//		begin
//			clkout <= clkout2Hz;
//			state <= stIncSec;
//		end
//		else if (cur_state == stIncMin)
//		begin
//			clkout <= clkout2Hz;
//			state <= stIncMin;
//		end
//		else if (cur_state == stPause)
//		begin
//			clkout <= clkout1Hz;
//			state <= stPause;
//		end
//	end
	
	
endmodule
