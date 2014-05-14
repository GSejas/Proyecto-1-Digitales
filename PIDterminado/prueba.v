`timescale 1ns / 1ps



module prueba;

	// Inputs
	reg clk;
	reg rst;
	reg [8:0] yactual;
	reg [8:0] referencia;

	// Outputs
	wire ena2;
	wire [17:0] PWMin;

	// Instantiate the Unit Under Test (UUT)
	todoPID uut (
		.clk(clk), 
		.rst(rst), 
		.yactual(yactual), 
		.referencia(referencia), 
		.ena2(ena2), 
		.PWMin(PWMin)
	);


always
	begin
		repeat (512)
		@(posedge ena2)
			begin
				yactual = yactual + 1; 
				repeat(512)
				@(posedge ena2)
				referencia = referencia + 1;
			end
	end
	
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		yactual = -128;
		referencia = 128;

		// Wait 100 ns for global reset to finish
		#100 rst=0;


		// Add stimulus here

	end
      initial forever 
		#10 clk=~clk;  
		// Add stimulus here
        

endmodule

