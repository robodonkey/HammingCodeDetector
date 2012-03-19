`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:06:31 03/07/2011
// Design Name:   top_module
// Module Name:   C:/Users/Donkey/Documents/My Dropbox/Homework/Classes 11(5) Spring/RBT433/Lab 4 - Seq. Detector - Hamming Code/Hamming Decoder/Hamming_Detector/hamming_tester.v
// Project Name:  Hamming_Detector
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hamming_tester;

	// Inputs
	reg dataIn;
	reg[6:0] data;
	
	// Outputs
	wire [6:0] currentData;
	wire [2:0] parity;
	wire errorFound;
	wire done;
	
	reg dataIncoming = 0;
	reg clock = 0;

	integer i = 0;
	integer clockCount;
	
	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.dataIncoming(dataIncoming),
		.dataIn(dataIn), 
		.currentData(currentData), 
		.parity(parity), 
		.clockCount(clockCount), 
		.errorFound(errorFound), 
		.done(done), 
		.clock(clock)
	);

	always begin
		#20 clock = ~clock;
	end
	
	initial begin
		// Initialize Inputs
		dataIn = 0;
		clockCount = 0;
		data = 7'b1010100;
		
		for(i = 0; i < 12; i = i + 1)
		begin
			@(posedge clock) begin
				clockCount = i;
				if(i < 7)
				begin
					dataIncoming = 1;
					dataIn = data[clockCount];
				end
				
				else
				begin
					dataIncoming = 0;
					if(i == 11)
					begin
						if(errorFound != 1'b0 || currentData != data)
							$display("Your device did not work correctly");
					end
				end
			end
		end
		
	end
      
endmodule

