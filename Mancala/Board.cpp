// Board.cpp

#include "Board.hpp"

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
		Board(int numPits, int numSeeds)
		{
			size = (numPits * 2) + 2;
			half = numPits + 1;
			p1Mancala = numPits;
			p2Mancala = size - 1;
			seeds = numSeeds;

			pits = new int[size];
			for (int i = 0; i < size; ++i)
			{
				if (i == p1Mancala || i == p2Mancala)
				{
					pits[i] = 0;
				}
				else
				{
					pits[i] = seeds;
				}
			}
		}

		/*
		Name: ~Board
		Description: Deletes pits array
		Input: None
		Output: None
		*/
		~Board()
		{
			delete[] pits;
		}
	};
}