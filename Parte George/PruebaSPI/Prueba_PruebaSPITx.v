`timescale 1ns / 1ps


module Prueba_PruebaSPITx;

	// Inputs
	reg clk;
	reg rst;
	reg MISO;

	// Outputs
	wire TxD;
	wire MOSI;
	wire SPI_CLK;
	wire CS_AMP;
	wire ADC_Conv;

	// Instantiate the Unit Under Test (UUT)
	UARTTransmiter uut (
		.clk(clk), 
		.rst(rst), 
		.TxD(TxD), 
		.MOSI(MOSI), 
		.MISO(MISO), 
		.SPI_CLK(SPI_CLK), 
		.CS_AMP(CS_AMP), 
		.ADC_Conv(ADC_Conv)
	);

//	initial 
//	begin
//		MISO = 1'bz;
//		#3268;
//		repeat(34) #320 MISO = $random;
//	end
	


always @(posedge SPI_CLK)
	begin
	#3;
	MISO = $random;
	end
	
	initial forever
		#10 clk = !clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		#50 rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		-> 
	end
      
endmodule


