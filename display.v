`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:04 02/17/2015 
// Design Name: 
// Module Name:    display 
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
module display(
    input sec_1,
    input sec_2,
    input min_1,
    input min_2,
    input clk_blink,
    input clk500Hz,
	 output reg [3:0] an,
	 output reg [6:0] seg
    );
		parameter zero = 7'b1000000;
		parameter one = 7'b1111001;
		parameter two = 7'b0100100;
		parameter three = 7'b0110000;
		parameter four = 7'b0011001;
		parameter five = 7'b0010010;
		parameter six = 7'b0000010;
		parameter seven = 7'b1111000;
		parameter eight = 7'b0000000;
		parameter nine = 7'b0010000;
always @ (posedge clk500Hz)
			begin
//			
//				if (clkblinking && adj)
//					begin
//						an <= 4'b1111;
//						
//					end
//					if (an <=<= 4'b1111)
//					#125000000;
			
			//		$display("%b", an);
				case (sec_2)
					'b0000:
						begin
							seg = zero;
							an = 4'b1101;
						end
					'b0001:
						begin
							seg = one;
							an = 4'b1101;
						end
					'b0010:
						begin
							seg = two;
							an = 4'b1101;
						end
					'b0011:
						begin
							seg = three;
							an = 4'b1101;
						end
					'b0100:
						begin
							seg = four;
							an = 4'b1101;
						end
					'b0101:
						begin
							seg = five;
							an = 4'b1101;
						end
					'b0110:
						begin
							seg = six;
							an = 4'b1101;
						end
					'b0111:
						begin
							seg = seven;
							an = 4'b1101;
						end
					'b1000:
						begin
							seg = eight;
							an = 4'b1101;
						end
					'b1001:
						begin
							seg = nine;
							an = 4'b1101;
						end
					default:
						begin
							seg = zero;
							an = 4'b1101;
						end
				endcase
			case (min_1)
					'b0000:
						begin
							seg = zero;
							an = 4'b1011;
						end
					'b0001:
						begin
							seg = one;
							an = 4'b1011;
						end
					'b0010:
						begin
							seg = two;
							an = 4'b1011;
						end
					'b0011:
						begin
							seg = three;
							an = 4'b1011;
						end
					'b0100:
						begin
							seg = four;
							an = 4'b1011;
						end
					'b0101:
						begin
							seg = five;
							an = 4'b1011;
						end
					'b0110:
						begin
							seg = six;
							an = 4'b1011;
						end
					'b0111:
						begin
							seg = seven;
							an = 4'b1011;
						end
					'b1000:
						begin
							seg = eight;
							an = 4'b1011;
						end
					'b1001:
						begin
							seg = nine;
							an = 4'b1011;
						end
					default:
						begin
							seg = zero;
							an = 4'b1011;
						end
				endcase;
			case (min_2)
					'b0000:
						begin
							seg = zero;
							an = 4'b0111;
						end
					'b0001:
						begin
							seg = one;
							an = 4'b0111;
						end
					'b0010:
						begin
							seg = two;
							an = 4'b0111;
						end
					'b0011:
						begin
							seg = three;
							an = 4'b0111;
						end
					'b0100:
						begin
							seg = four;
							an = 4'b0111;
						end
					'b0101:
						begin
							seg = five;
							an = 4'b0111;
						end
					'b0110:
						begin
							seg = six;
							an = 4'b0111;
						end
					'b0111:
						begin
							seg = seven;
							an = 4'b0111;
						end
					'b1000:
						begin
							seg = eight;
							an = 4'b0111;
						end
					'b1001:
						begin
							seg = nine;
							an = 4'b0111;
						end
					default:
						begin
							seg = zero;
							an = 4'b0111;
						end
				endcase
							
					
				case (sec_1)
					'b0000:
						begin
							seg = zero;
							an = 4'b1110;
						end
					'b0001:
						begin
							seg = one;
							an = 4'b1110;
						end
					'b0010:
						begin
							seg = two;
							an = 4'b1110;
						end
					'b0011:
						begin
							seg = three;
							an = 4'b1110;
						end
					'b0100:
						begin
							seg = four;
							an = 4'b1110;
						end
					'b0101:
						begin
							seg = five;
							an = 4'b1110;
						end
					'b0110:
						begin
							seg = six;
							an = 4'b1110;
						end
					'b0111:
						begin
							seg = seven;
							an = 4'b1110;
						end
					'b1000:
						begin
							seg = eight;
							an = 4'b1110;
						end
					'b1001:
						begin
							seg = nine;
							an = 4'b1110;
						end
					default:
						begin
							seg = zero;
							an = 4'b1110;
						end
					endcase
					
			end
endmodule
