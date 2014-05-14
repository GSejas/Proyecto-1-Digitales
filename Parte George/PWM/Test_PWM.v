`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:15:47 05/10/2014
// Design Name:   PWMFbase12k
// Module Name:   C:/Users/GSejas/Dropbox/Lab digitales/New/PWM/Test_PWM.v
// Project Name:  PWM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PWMFbase12k
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_PWM;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] CompDat;

	// Outputs
	wire PWM;

	// Instantiate the Unit Under Test (UUT)
	PWMFbase12k uut (
		.clk(clk), 
		.rst(rst), 
		.CompDat(CompDat), 
		.PWM(PWM)
	);

//Se varian los valores a comparar, hasta 255
//Asi se comprueba que el periodo se acerta para todos estos valores
//Asi se comprueba el periodo a recibirse, se espera una frecuencia base de ~12KHz.

	initial begin
		repeat (255) begin
			@(negedge PWM);
			CompDat = CompDat + 1;
		end
	end

	initial forever
		#10 clk = !clk;
		
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		CompDat = 0;
		#40 rst = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

