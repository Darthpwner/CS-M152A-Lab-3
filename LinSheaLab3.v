`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:47 11/03/2015 
// Design Name: 
// Module Name:    rty 
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
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:	03:13:05 11/03/2015
// Design Name:
// Module Name:	hihi
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

//Fix this shit

module clock(
            input counterModule, 
            output clkModule);
       
 always @ (posedge clk or posedge arst) begin 

/*module clock(
input infre,
input sel,
input adj,
input rst,
input pause,
input clk
);

always @ (posedge clk or posedge arst) begin
  if(arst) begin
	counter1 <=0;
	clk_oneHz <=0;
  end
  else
  begin
 	if(counter1 == max_oneHz-1)  //100mhz/2
   begin
  	counter <= 0;
 	clk_one_Hz <= ~clk_oneHz;
  end
  else
  begin
 	counter1 <= counter1 + 1'd1;
  end
 end
end

always @ (posedge clk_in, posedge arst) begin
   if(arst) begin
   counter <= 0;
   clk_twoHz <=0;
 end
 else
 begin
	if(counter2 == max_twoHz-1)   //100Mhz/4
  begin
  counter2 <= 0;
  clk_twoHz <= ~clk_twoHz;
  end
  else
  begin
  counter2 <= counter2+1'd1;
  end
 end
 
endmodule*/

//Fix this shit

module counter(                                 //Counter module
        input pause,
        input reset,
        input clk,
        output [5:0] cnt,   
        output max
    );
    
    reg [5:0] c;
    reg m;
    initial begin
        c = 0;
        m = 1'b0;
    end
    
    always @ (posedge clk or posedge reset) begin
        if (reset == 1'b1)
            c = 0;
        else begin
            m = 1'b0;
            if (pause != 1'b1)
                c = c + 1;
            if (c == 60) begin
                c = 0;
                m = 1'b1;
            end
        end
    end

    assign cnt = c;
    assign max = m;
endmodule

module seven_segment(
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


module display(                               //Display module
        input clk,
        input blink_clk,
        input sel,
        input [5:0] sec,
        input [5:0] min,
        output [7:0] seg,
        output [3:0] an
    );

    reg [3:0] anode;
    reg [3:0] n;
    reg blinked;
    seven_segment get_seg (
       .number(n),
       .seg(seg)
    );

    initial begin
        anode = 4'b1110;
        n = 4'b1111;
        blinked = 0;
    end

    always @ (posedge clk) begin
        anode = {anode[0], anode[3:1]};
        case (anode)
            4'b0111 : n = (blink_clk == 1 && sel == 0 &&
            blinked == 0) ? 10 : min / 10;
            4'b1011 : n = (blink_clk == 1 && sel == 0 &&
            blinked == 0) ? 10 : min % 10;
            4'b1101 : n = (blink_clk == 1 && sel == 1 &&
            blinked == 0) ? 10 : sec / 10;
            4'b1110 : n = (blink_clk == 1 && sel == 1 &&
            blinked == 0) ? 10 : sec % 10;
            default : n = 0;
        endcase
    end

    always @ (posedge blink_clk) begin
        blinked = ~blinked;
    end
    
    assign an = anode;
endmodule

module FSM(                             //FSM module
            input adj,
            input sel,
            input clk,
            output [1:0] state
        );

        parameter stidle = 0;
        parameter stsec = 1;
        parameter stmin = 2;
        reg [1:0] cur_state;

        always @ (posedge clk) begin
        if (adj == 0)
            cur_state <= stidle;
        else
            if (sel == 0)
                cur_state <= stmin;
            else cur_state <= stsec;
        end

        assign state = cur_state;
endmodule

module stopwatch(                //stop watch module
                input master_clk,
                input sel,
                input adj,
                input rst,
                input pause,
                output [5:0] min,
                output [5:0] sec,
                output [7:0] seg,
                output [3:0] an
            );
            
            wire clk_1;
            wire clk_min;
            wire clk_sec;
            wire clk_display;
            wire clk_blink;
            wire cnt_min_en;
            reg sec_using_clk;
            reg min_using_clk;
            reg sec_pause;
            reg min_pause;
            reg min_rst;
            reg sec_rst;
            reg paused;
            reg clk_blink_en;
            
            wire ignore;
            wire [17:0] clk_dv_inc;
            reg [16:0] clk_dv;
            reg clk_en;
            reg clk_en_d;
            reg [2:0] step_d;
            wire [1:0] state;
            clock clk1 (.clk(master_clk),.rate(1),.rst(0),
                        .clk_en(clk_1) );
            clock clkmin (.clk(master_clk),.rate(2),.rst(min_rst),
                          .clk_en(clk_min));
            clock clksec (.clk(master_clk),.rate(2),.rst(sec_rst),
                          .clk_en(clk_sec) );
            clock clkdisplay (.clk(master_clk),.rate(800),.rst(0),
                            .clk_en(clk_display) );
            clock clkblink (.clk(master_clk),.rate(4),.rst(0),
                            .clk_en(clk_blink) );
            counter sec_cnt (.clk(sec_using_clk),.pause(sec_pause),
                            .reset(rst),.cnt(sec),.max(cnt_min_en)
);

            counter min_cnt (.clk(min_using_clk),.pause(min_pause),
                            .reset(rst),.cnt(min),.max(ignore));
                            display dis (.clk(clk_display),.blink_clk(clk_blink_en),
                            .sel(sel),.sec(sec),.min(min),.seg(seg),.an(an));
                            FSM machine (.adj(adj),.sel(sel),.clk(clk_display),
                            .state(state));
            initial begin
                paused = 1'b0;
            end

            always @ (posedge master_clk) begin
                sec_pause = 1'b0;
                min_pause = 1'b0;
                clk_blink_en = 0;
                
                case (state)
                    0: begin
                        sec_using_clk = clk_1;
                        min_using_clk = cnt_min_en;
                        min_rst = 1;
                        sec_rst = 1;
                    end

                    1: begin
                        clk_blink_en = clk_blink;
                        sec_using_clk = clk_sec;
                        min_pause = 1'b1;
                        min_using_clk = 0;
                        sec_rst = 0;
                        min_rst = 1;
                    end
                    2: begin
                        clk_blink_en = clk_blink;
                        min_using_clk = clk_min;
                        sec_pause = 1'b1;
                        sec_using_clk = 0;
                        sec_rst = 1;
                        min_rst = 0;
                    end
                endcase

                sec_pause = sec_pause | paused;
                min_pause = min_pause | paused;
            end

            assign clk_dv_inc = clk_dv + 1;
            
            always @ (posedge master_clk) begin
                clk_dv <= clk_dv_inc[16:0];
                clk_en <= clk_dv_inc[17];
                clk_en_d <= clk_en;
            end

/*
=================================================================
==========
 // Instruction Stepping Control
 //
=================================================================
==========
*/
always @ (posedge master_clk)
begin
 if (clk_en)
 begin
 step_d[2:0] <= {pause, step_d[2:1]};
 
 end
end
 always @ (posedge master_clk)
 begin
 if (~step_d[0] & step_d[1] & clk_en_d == 1)
 paused = ~paused;
 end
endmodule


