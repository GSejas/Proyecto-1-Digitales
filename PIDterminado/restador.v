`timescale 1ns / 1ps

module restador8bits(entrada1,entrada2,salida);
input[8:0]entrada1,entrada2;
output wire[8:0]salida;
assign salida=entrada1-entrada2;
endmodule
