`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:36 05/10/2014 
// Design Name: 
// Module Name:    asd 
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
module Conta18b(rst, clk, cuenta);

parameter LARGO = 18;
input rst, clk;
output reg [LARGO - 1:0]cuenta;

always @(negedge clk, posedge rst)
	if(rst)
		cuenta = 0;
	else 
		cuenta = cuenta + 1;
	
	
endmodule
