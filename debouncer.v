`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:55:19 02/18/2015 
// Design Name: 
// Module Name:    debouncer 
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
module debouncer(
    input clk,
    input in,
    output reg out
    );
	 
	
	reg [3:0] shift;
	reg [19:0] counter = 0;
	
		
	always @ (posedge clk)
	begin
		if (counter == 0) begin
			out <= shift[3];
			counter <= 'd99999999999999;
		end
		else counter <= counter - 1'b1;
		
		shift <= {shift[2:0], in};
	end	


endmodule
