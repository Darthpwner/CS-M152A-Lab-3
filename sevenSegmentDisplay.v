`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:41:26 10/29/2015 
// Design Name: 
// Module Name:    sevenSegmentDisplay 
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

module sevenSegmentDisplay(

        input [3:0] number,

        output [7:0] seg

    );


    reg [7:0] seg_tmp;

    

    always @ (*) begin

        case (number)

            0 : seg_tmp = 8'b1100_0000;

            1 : seg_tmp = 8'b1111_1001;

            2 : seg_tmp = 8'b1010_0100;

            3 : seg_tmp = 8'b1011_0000;

            4 : seg_tmp = 8'b1001_1001;

            5 : seg_tmp = 8'b1001_0010;

            6 : seg_tmp = 8'b1000_0010;

            7 : seg_tmp = 8'b1111_1000;

            8 : seg_tmp = 8'b1000_0000;

            9 : seg_tmp = 8'b1001_0000;

            default : seg_tmp = 8'b1111_1111;

        endcase

    end

    assign seg = seg_tmp;

endmodule



