`timescale 1ns / 1ps


module multiplicador(constante,multiplicador,salida);
input signed [7:0]constante,multiplicador;
output wire[15:0]salida;
assign salida=constante*multiplicador;
endmodule
