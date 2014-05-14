`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:15:44 05/10/2014 
// Design Name: 
// Module Name:    Conta5b 
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
module Conta8b(rst, clk, ena, cuenta);

parameter LARGO = 8;
input rst, clk, ena;
output reg [LARGO - 1:0]cuenta;

always @(posedge clk, posedge rst)
	if(rst)
		cuenta = 0;
	else if (ena)
		cuenta = cuenta + 1;
	else
		cuenta = cuenta;
	
	
endmodule
