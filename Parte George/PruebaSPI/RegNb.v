`timescale 1ns / 1ps


module RegNb(clk,rst,ena,DataIn,DataOut);
parameter n = 8;

input clk, rst, ena;
input [n-1:0] DataIn;
output reg [n-1:0] DataOut;


always @(posedge clk, posedge rst)
	begin
		if (rst)
			DataOut = 0;
		else if (ena)
			DataOut = DataIn;
		else
			DataOut = DataOut;
	end
endmodule
