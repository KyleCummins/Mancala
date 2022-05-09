// GameUI.h

#pragma once

#include "Board.hpp"

namespace Mancala
{
	/*
	Name: GameUI
	Description: Abstract class defining functionality for a mancala game interface
	*/
	class GameUI
	{
	public:

		/*
		Name: displayBoard
		Description: Updates the interface with current board state
		Input: Current board state as Board
		Output: None
		*/
		virtual void displayBoard(Board curBoard) = 0;

		/*
		Name: getInput
		Description: Gets a move from a human player through the interface
		Input: None
		Output: Player move as int
		*/
		virtual int getInput() = 0;
	};
}