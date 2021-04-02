#include"tic_tac_toe.h"
#include<iostream>

using std::cin, std::cout,  std::string;

int main() 
{
	tic_tac_toe game;
	string player;
	int position;

	
		cout<<"Please enter x or o to start the TicTacToe game: ";
		cin>>player;
		game.start_game(player);
		game.display_board();
	
	do
	{
		cout<<"\nIt's "<<game.get_player()<<"'s turn."<<" Please choose a free slot on the board using numbers from 1-9: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();
	} while (game.game_over() == false);
	
	cout<<"\nOh no! Game over..."<<"\n";

	return 0;
}