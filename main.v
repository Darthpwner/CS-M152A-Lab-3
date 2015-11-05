`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:22:48 02/14/2015 
// Design Name: 
// Module Name:    main 
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
module main(
    input clk,  
    input sel,   
    input adj,
	 
	 input rst,
    input pause,
	 output reg [3:0] an,
	 output reg [6:0] seg,
	 output reg ledpause,
	 output reg ledreset,
	 output reg ledsel, 
	 output reg ledadj,
	 output reg norm,
	 output reg adj1,
	 output reg adj2,
	 output reg pas
    );
		wire [2:0] cur_state;
		wire clkout,
			  clk500Hz,
			  clkblinking;
		wire[3:0] sec_1;
		wire[3:0] sec_2;
		wire [3:0] min_1;
		wire[3:0] min_2;
					  
		wire  rst_d;
		wire pause_d;
		wire sel_d;
		wire adj_d;
		
		reg ispaused = 0;
		
		debouncer d1(.clk(clk), .in(pause), .out(pause_d));
		debouncer d2(.clk(clk), .in(rst), .out(rst_d));
		debouncer d3(.clk(clk), .in(sel), .out(sel_d));
		debouncer d4(.clk(clk), .in(adj), .out(adj_d));
		
					                       //Al the diplay
		parameter zero = 7'b1000000;             //display0
		parameter one = 7'b1111001;              //display1
		parameter two = 7'b0100100;              //display2
		parameter three = 7'b0110000;            //display3
		parameter four = 7'b0011001;             //display4
		parameter five = 7'b0010010;             //display5
		parameter six = 7'b0000010;              //display6
		parameter seven = 7'b1111000;            //display7
		parameter eight = 7'b0000000;            //display8
		parameter nine = 7'b0010000;             //display9
					   
		integer i = 0;
		
		reg [3:0] sec1temp, sec2temp, min1temp, min2temp;
		reg blinkingmin = 0;
		reg blinkingsec = 0;
		reg lightupmin = 1;
		reg lightupsec = 1;
			  
		fsm statemachine (.clk(clk),.sel(sel_d), .adj(adj_d),.pause(ispaused), .clkout500Hz(clk500Hz),
							.state(cur_state),.clkout(clkout), .clkoutadj(clkblinking));
		counter ct(.state(cur_state), .rst(rst_d), .clk(clkout), .sec_1(sec_1), .sec_2(sec_2), .min_1(min_1), .min_2(min_2));
		

		
		always @ (negedge pause_d)
			ispaused <= ~ispaused;
			

			
//		always @ (posedge rst_d)
//		begin
//			sec1temp <= 0;
//			sec2temp <= 0;
//			min1temp <= 0;
//			min2temp <= 0;
//		end
//		
//		assign sec_1 = sec1temp;
//		assign sec_2 = sec2temp;
//		assign min_1 = min1temp;
//		assign min_2 = min2temp;



//		always @ (posedge clk500Hz) 
//		begin
//			case (i)
//				0:
//					an = 4'b1110;
//				1:
//					an = 4'b1101;
//				2:
//					an = 4'b1011;
//				3:
//					an = 4'b0111;
//				default:
//					an = 4'b1111;
//			endcase
//			
//			if (i == 0)
//				begin
//					
//			
//		end
		
	
//	always @ (posedge clk)
//		if (rst_d) begin
//					sec_1 = 0;
//		sec_2 = 0;
//		min_1 = 0;
//		min_2 = 0;
//		end



//		always @*
//			begin

	   always @*
		begin
			if (adj)                 //Ajust 1
			begin
				if (sel)                     //select 1 -> we want to increase the frequency of second
				begin
					blinkingsec = 1;                //chnage blinkingsec to 1
					blinkingmin = 0;
				end
				else
				begin
					blinkingmin = 1;             //select 2->we want to increase the frequency of minute
					blinkingsec = 0;                 //chnage blinkingmin to 1
				end
			end
			else
			begin
				blinkingsec = 0;		
				blinkingmin = 0;
			end
		end
	

		always @ (posedge clkblinking)              // clockblinking
		begin
			if (blinkingmin)                            //if clock min blinking
			begin
				lightupmin <= ~lightupmin;                   //yolo
				lightupsec <= 1;
			end
			else if (blinkingsec)                      //if sec blinking
			begin
				lightupsec <= ~lightupsec;
				lightupmin <= 1;
			end
			else
			begin
				lightupmin <= 1;
				lightupsec <= 1;
			end
		end
		
		always @* begin
			if (pause_d)
				ledpause <= 1;
			else
				ledpause <= 0;
				
			if (rst_d)
				ledreset <= 1;
			else
			ledreset <= 0;
			
			if (sel_d)
				ledsel <= 1;
			else 
				ledsel <= 0;
				
			if (adj_d)
				ledadj <= 1;
			else
				ledadj <= 0;

			if (cur_state == 'd1)
				norm <= 1;
			else 
				norm <= 0;
				
			if (cur_state == 'd2)
				adj1 <= 1;
			else
				adj1 <= 0;
				
			if (cur_state == 'd3)
				adj2 <= 1;
			else
				adj2 <= 0;
			
			if (cur_state == 'd4)
				pas <= 1;
			else
				pas <= 0;
		end
		
		
				/*
				the mapping from register values of time to seven segment display 
				inside the following module. Themodule also takes care of multiplexing 
				the digit, which means using a slower clock than the master clock to display 
				the digit one by one. In our design, we use 500Hz clock to do the multiplexing 
				for sevenseg display
				
				*/


   	always @ (posedge clk500Hz)                    //This is the display module
			begin
			
					if (i == 0)
						begin
						case (sec_1)
							'b0000:
								begin
								if (lightupsec) begin
									seg = zero;
									an = 4'b1110;
										end
								else an = 4'b1111;
									
								end
							'b0001:
								begin
								if (lightupsec) begin
									seg = one;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0010:
								begin
								if (lightupsec) begin
									seg = two;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0011:
								begin
								if (lightupsec) begin
									seg = three;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0100:
								begin
								if (lightupsec) begin
									seg = four;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0101:
								begin
								if (lightupsec) begin
									seg = five;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0110:
								begin
								if (lightupsec) begin
									seg = six;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b0111:
								begin
								if (lightupsec) begin
									seg = seven;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b1000:
								begin
								if (lightupsec) begin
									seg = eight;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							'b1001:
								begin
								if (lightupsec) begin
									seg = nine;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
							default:
								begin
								if (lightupsec) begin
									seg = zero;
									an = 4'b1110;
										end
										else an = 4'b1111;
								end
								
						endcase
						
							i = i + 1;
						end
					else if (i == 1)
					begin
					case (sec_2)
								'b0000:
									begin
									if (lightupsec) begin
										seg = zero;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0001:
									begin
									if (lightupsec) begin
										seg = one;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0010:
									begin
									if (lightupsec) begin
										seg = two;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0011:
									begin
									if (lightupsec) begin
										seg = three;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0100:
									begin
									if (lightupsec) begin
										seg = four;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0101:
									begin
									if (lightupsec) begin
										seg = five;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0110:
									begin
									if (lightupsec) begin
										seg = six;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b0111:
									begin
									if (lightupsec) begin
										seg = seven;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b1000:
									begin
									if (lightupsec) begin
										seg = eight;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								'b1001:
									begin
									if (lightupsec) begin
										seg = nine;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
								default:
									begin
									if (lightupsec) begin
										seg = zero;
										an = 4'b1101;
										end
										else an = 4'b1111;
									end
							endcase
						
						i = i + 1;
					end
				
					else if (i == 2) begin
					case (min_2)
							'b0000:
								begin
								if (lightupmin) begin
									seg = zero;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0001:
								begin
								if (lightupmin) begin
									seg = one;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0010:
								begin
								if (lightupmin) begin
									seg = two;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0011:
								begin
								if (lightupmin) begin
									seg = three;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0100:
								begin
								if (lightupmin) begin
									seg = four;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0101:
								begin
								if (lightupmin) begin
									seg = five;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
								
							'b0110:
								begin
								if (lightupmin) begin
									seg = six;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b0111:
								begin
								if (lightupmin) begin
									seg = seven;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b1000:
								begin
								if (lightupmin) begin
									seg = eight;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							'b1001:
								begin
								if (lightupmin) begin
									seg = nine;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							default:
								begin
								if (lightupmin) begin
									seg = zero;
									an = 4'b0111;
									end
									else an = 4'b1111;
								end
							endcase
							i = i + 1;
						end
					else if (i == 3) begin
					 case (min_1)
								'b0000:
									begin
									if (lightupmin) begin
										seg = zero;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0001:
									begin
									if (lightupmin) begin
										seg = one;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0010:
									begin
									if (lightupmin) begin
										seg = two;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0011:
									begin
									if (lightupmin) begin
										seg = three;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0100:
									begin
									if (lightupmin) begin
										seg = four;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0101:
									begin
									if (lightupmin) begin
										seg = five;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0110:
									begin
									if (lightupmin) begin
										seg = six;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b0111:
									begin
									if (lightupmin) begin
										seg = seven;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b1000:
									begin
									if (lightupmin) begin
										seg = eight;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								'b1001:
									begin
									if (lightupmin) begin
										seg = nine;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
								default:
									begin
									if (lightupmin) begin
										seg = zero;
										an = 4'b1011;
										end
										else an = 4'b1111;
									end
							endcase
								
						i = 0;
					end
					
			else begin
				an = 4'b1111;
			end
		
		end
		
		
//db

//	always @ (posedge clk)
//	begin
//		deb1[7:0] <= {deb1[6:0], adj};
//		if (deb1[7:0] == 8'b00000000)
//			adj_d <= 0;
//		else if (deb1[7:0] == 8'b11111111)
//			adj_d <= 1;
//		else
//			adj_d <= adj_d;
//	end
//
//	
//	always @ (posedge clk)
//	begin
//		deb2[7:0] <= {deb2[6:0], rst};
//		if (deb2[7:0] == 8'b00000000)
//			rst_d <= 0;
//		else if (deb2[7:0] == 8'b11111111)
//			rst_d <= 1;
//		else
//			rst_d <= rst_d;
//	end


	
endmodule
