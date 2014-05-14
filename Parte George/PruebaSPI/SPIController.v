`timescale 1ns / 1ps


module SPIController(clk, rst, ena, BuffOut, MOSI, MISO, SPI_CLK, CS_AMP, ADC_Conv);

input clk, ena, rst, MISO;

output [7:0]BuffOut;
output MOSI, SPI_CLK, CS_AMP, ADC_Conv;

wire Init, Init_Done, Ena_ContX, Ena_RegBuff;
wire [1:0]Cont;
wire [7:0]DataADC;

assign Ena_ContX = !(Cont==2'b11);
assign Ena_RegBuff = ena&&ADC_Conv;


Reg8b RegBuff(clk,rst,Ena_RegBuff,DataADC,BuffOut);

Conta2b ContX(rst, clk, Ena_ContX, Cont);

SPISegmentoControlado Controlado(clk, rst, Init, CS_AMP, MISO, Init_Done, SPI_CLK, MOSI, ADC_Conv, DataADC);

FSMPrincipalSPI Controlador(clk, rst, Ena_ContX, Init_Done, CS_AMP, Init);

endmodule
