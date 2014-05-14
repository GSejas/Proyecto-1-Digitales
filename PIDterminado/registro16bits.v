`timescale 1ns / 1ps

module registro16bits(clk,rst,ena,dato,guardado);
input clk,ena,rst;
input [17:0]dato;
output reg [17:0]guardado;
always @(posedge clk)
	if(rst)
		guardado=18'b0;
	else if(ena)
				guardado=dato;
			else 
				guardado=guardado;

endmodule
