#pragma once

namespace Mancala
{
	/*
	Name: Board
	Description: Struct containing information about a mancala game board's current state
	*/
	struct Board
	{
		int* pits; // Dynamically allocated array of pits/mancalas
		int size; // Total number of pits on the board
		int half; // Start of player 2's pits
		int p1Mancala; // Location of player 1's mancala
		int p2Mancala; // Location of player 2's mancala
		int seeds; // Starting number of seeds per pit

		/*
		Name: Board
		Description: Initializes all relevant board information with starting values
		Input: Number of pits per player as numPits, number of starting seeds per pit as numSeeds
		Output: None
		*/
		Board(int numPits, int numSeeds);

		/*
		Name: ~Board
		Description: Frees pits array
		Input: None
		Output: None
		*/
		~Board();
	};
}