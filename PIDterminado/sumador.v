`timescale 1ns / 1ps

module sumador16bits(entrada1,entrada2,salida);
input [17:0]entrada1,entrada2;
output wire [17:0]salida;
assign salida=entrada1+entrada2;
endmodule
