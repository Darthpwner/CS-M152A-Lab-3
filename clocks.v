`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:31:34 10/27/2015 
// Design Name: 
// Module Name:    clocks 
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
module clocks(/*Input*/ clk_in_100MHz, reset, pause,
              /*Outputs*/ sig_clock_1Hz, sig_clock_2Hz, sig_clock_4Hz, sig_clock_500Hz
    );
    
    input clk_in_100MHz, reset, pause;
    output sig_clock_1Hz, sig_clock_2Hz, sig_clock_4Hz, sig_clock_500Hz;
    
    reg reg_1Hz, reg_2Hz, reg_4Hz, reg_500Hz;
    
    reg clk_counter;
    
    always @ (posedge clk_in_100MHz,posedge reset) begin
           if (reset) begin //If reset is true, reset all the values
               //counter1 <= 0;
               reg_1Hz <= 0;
               reg_2Hz <= 0;
               reg_4Hz <= 0;
               reg_500Hz <= 0;
               clk_counter <= 0;
           end if(clk_counter == 1) begin   //if 1 Hz timing
					
           end if(clk_counter == 2) begin   //else if 2 Hz timing
           
           end if(clk_counter == 3) begin    //else if 500 Hz timing
           
           end if (clk_counter == 4) begin//else if 500 Hz timing
           
           end //else if 4 Hz timing
   end
endmodule
