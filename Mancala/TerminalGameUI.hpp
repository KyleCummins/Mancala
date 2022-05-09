// TerminalGameUI.hpp

#pragma once

#include "GameUI.hpp"

namespace Mancala
{
	/*
	Name: TerminalGameUI
	Description: Allows a command prompt to act as a mancala game interface
	*/
	class TerminalGameUI : public GameUI
	{
	public:

		/*
		Name: displayBoard
		Description: Updates the interface with current board state
		Input: Current board state as Board
		Output: None
		*/
		virtual void displayBoard(Board curBoard)
		{
		}

		/*
		Name: getInput
		Description: Gets a move from a human player through the interface
		Input: None
		Output: Player move as int
		*/
		virtual int getInput()
		{
		}
	};
}


