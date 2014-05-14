`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:00:24 05/10/2014 
// Design Name: 
// Module Name:    PWMFbase12k 
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
module PWMFbase12k(clk, rst, CompDat, PWM);
input clk, rst;
input [7:0]CompDat;
output PWM;

wire [11:0]cuenta;
wire ValJ, ValK;

Conta12b Conta1(rst, clk, cuenta);

FFJK JK(clk, ValJ, ValK, PWM);
assign ValJ = (CompDat ==cuenta[11:4]);
assign ValK = (cuenta[11:4] == 8'd255);
endmodule
