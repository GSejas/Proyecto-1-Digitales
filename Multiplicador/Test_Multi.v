`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:23:19 05/13/2014
// Design Name:   multiplicador
// Module Name:   C:/Users/GSejas/Dropbox/Lab digitales/Proyecto 1/Multiplicador/Test_Multi.v
// Project Name:  Multiplicador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplicador
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_Multi;

	// Inputs
	reg [7:0] constante;
	reg [7:0] multiplicador;

	// Outputs
	wire [15:0] salida;

	// Instantiate the Unit Under Test (UUT)
	multiplicador uut (
		.constante(constante), 
		.multiplicador(multiplicador), 
		.salida(salida)
	);

	initial begin
		// Initialize Inputs
		
		//Positivo y negativo
		constante = 8'd88;
		multiplicador = 8'd150;
		
		//Negativo negativo
		#30 constante = 8'd150;
		multiplicador = 8'd150;
		
		//Positivo positivo
		#30 constante = 8'd126;
		multiplicador = 8'd126;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

