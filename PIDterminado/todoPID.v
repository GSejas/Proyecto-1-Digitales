`timescale 1ns / 1ps

module todoPID(clk,rst,yactual,referencia,ena2,PWMin);
input clk,rst;
input [8:0]yactual,referencia;
output wire ena2;
output wire [17:0]PWMin;
wire etapa2,etapa3,etapa4,ena1,seg,tiempo,rst1;
wire [8:0]ki,kp,kd;
////////////////////////////////////////////////////////////////////////////////////////
PIDgeneral fisico(clk,rst,etapa2,etapa3,etapa4,yactual,referencia,ki,kd,kp,PWMin);//
controldelPID FSM(clk,rst,tiempo,seg,ena1,ena2,ki,kd,kp,rst1,etapa2,etapa3,etapa4);
cuentatiempos periodo(clk,rst1,ena1,tiempo,seg); 
endmodule
