`timescale 1ns / 1ps

module UARTTransmiter(clk, rst, TxD, MOSI, MISO, SPI_CLK, CS_AMP, ADC_Conv, AMP_Shunt,SPI_SS_B , DAC_CS,SF_CE,FPGA_INIT_B );
input clk, rst, MISO;
output TxD, SPI_CLK, CS_AMP, ADC_Conv, MOSI, SPI_SS_B, DAC_CS, SF_CE, FPGA_INIT_B,AMP_Shunt;

wire signed [7:0]BuffOut1;
wire signed [7:0]BuffOut2;
wire [17:0]cuenta2;
wire Tx_Ena,Cont_rst,TxD_busy;

Conta18b Cinco(Cont_rst||rst, clk, cuenta2);
//assign Tx_Ena = (cuenta2 == 18'd250000);
//assign Cont_rst = (cuenta2 == 18'd250001);
assign Tx_Ena = (cuenta2 == 18'd250000);
assign Cont_rst = (cuenta2 == 18'd260000);
assign SPI_SS_B = 1'b1;
assign DAC_CS = 1'b1;
assign SF_CE = 1'b1;
assign FPGA_INIT_B = 1'b0;
assign AMP_Shunt = 1'b0;
assign BuffOut2 = -BuffOut1;

async_transmitter TX(clk, Tx_Ena, BuffOut2,TxD,TxD_busy);

SPIController SPI(clk, rst, !TxD_busy, BuffOut1, MOSI, MISO, SPI_CLK, CS_AMP, ADC_Conv);

endmodule

