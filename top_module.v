`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:58:00 03/07/2011 
// Design Name: 
// Module Name:    top_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top_module( dataIncoming, dataIn, currentData, parity, clockCount, errorFound, done, clock);

	input dataIn;
	input dataIncoming;
	input[31:0] clockCount;
	input clock;
	output[6:0] currentData; reg[6:0] currentData;
	output[2:0] parity; reg[2:0] parity;
	output errorFound; reg errorFound;
	output done; reg done;
	
//	integer clockCount;

	parameter maskP1 = 7'b1010101;
	parameter maskP2 = 7'b1100110;
	parameter maskP3 = 7'b1111000;

	always @(posedge clock)
	begin
		done = 0;
		if(clockCount < 7)
			currentData[clockCount] = dataIn;
		
		else
		begin
			parity[2] = (^(currentData & maskP3));
			parity[1] = (^(currentData & maskP2));
			parity[0] = (^(currentData & maskP1));
			errorFound = 1;
			
			case(parity)
				3'b000: errorFound = 0; //no operation
				3'b001: currentData[0] = ~currentData[0]; //flip 1st parity bit
				3'b010: currentData[1] = ~currentData[1]; //flip 2nd parity bit
				3'b011: currentData[2] = ~currentData[2]; //flip 1st data bit
				3'b100: currentData[3] = ~currentData[3]; //flip 3rd parity bit
				3'b101: currentData[4] = ~currentData[4]; //flip 2nd data bit
				3'b110: currentData[5] = ~currentData[5]; //flip 3rd data bit
				3'b111: currentData[6] = ~currentData[6]; //flip 4th data bit
				default:
				begin
					currentData = 7'b0000000;
					parity = 3'b000;
					errorFound = 1;
				end
			endcase
		
			done = 1;
		end
		
	end

endmodule
