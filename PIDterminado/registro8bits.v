`timescale 1ns / 1ps

module registro8bits(clk,rst,ena,dato,guardado);
input clk,ena,rst;
input [8:0]dato;
output reg [8:0]guardado;
always @(posedge clk)
	if(rst)
		guardado=8'b0;
	else if(ena)
				guardado=dato;
			else 
				guardado=guardado;

endmodule
