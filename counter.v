`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:46:32 02/09/2015 
// Design Name: 
// Module Name:    counter 
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
module counter( 
		input [2:0]state,
		input clk,
		input rst,
		output reg [3:0] sec_1,
		output reg [3:0] sec_2,
		output reg [3:0] min_1,
		output reg [3:0] min_2
    );
	 integer i;
//	 always @(posedge clk) begin
//		if(state == 'd0)
//		if(state == 'd1)

//	always @ (posedge rst) begin
//		sec_1 <= 0;
//		sec_2 <= 0;
//		min_1 <= 0;
//		min_2 <= 0;
//		end

/*
In the counter module, we check for the value of is_paused, ADJ, 
and SEL and increment the desired time accordingly. For example, 
 when the ADJ is set to 1 and SEL is 0, then we update the minute, 
 if ADJ is 1 and SEL is 1, we update the second. If ADJ is 0, then everything is updated. 
 These all happen when the is_paused input is 0. The counter module also takes care of 
 wrapping the number. For example, 59 seconds add one second wraps to 00 seconds…etc. 
*/
	always @ (posedge clk or posedge rst) begin
	 if (rst)                   //If the clock is reset change all the values back to 0
		begin
		sec_1 <= 0;
		sec_2 <= 0;
		min_1 <= 0;
		min_2 <= 0;
		end
	  else if (state == 'd1)                       //If state d1 the first state
		begin
			if (sec_1 == 'd9)
			begin 
				if(sec_2 < 'd5) 
				begin
					sec_2 <= sec_2 + 'd1;
					sec_1 <= 'd0;         //As long as the input did not change (sel can be 0 or 1), 
					                      //it will remain in normal states. 
				end
				else
				begin 
					if(min_1 < 'd9)                  //if min is < d9
					begin
						min_1 <= min_1 + 'd1;          
						sec_2 <= 'd0;                         //set sec to 0
						sec_1 <= 'd0;
					end
					else
					begin
						min_2 <= min_2 + 'd1;
						min_1 <= 'd0;
						sec_2 <= 'd0;
						sec_1 <= 'd0;
					end
				end
			end
			else sec_1 <= sec_1 + 'd1;
		end
		else if (state == 'd3)
		begin
			if (sec_1 == 'd9)
			begin 
				if(sec_2 < 5) 
				begin
					sec_2 <= sec_2 + 1;
					sec_1 <= 0;
				end
				else
				begin
					sec_1 <= 'd0;
					sec_2 <= 'd0;
				end 
			end
			else 
				sec_1 <= sec_1 + 1;
		end
		else if(state == 'd2)       //If it is the 4th state
		begin
		if (min_1 == 9)
			begin
				if(min_2 < 9)
				begin
					min_2 <= min_2 + 1;
					min_1 <= 0;
				end
				else
				begin
					min_2 <= 'd0;
					min_1 <= 'd0;
				end
			end
		else 
			min_1 <= min_1 + 1;
	end
//			else if (state == 'd4)
//				begin
//				sec_1 <= sec_1 ;
//				sec_2 <= sec_2;
//				min_1 <= min_1;
//				min_2 <= min_2;
//				end
	end
		
endmodule
