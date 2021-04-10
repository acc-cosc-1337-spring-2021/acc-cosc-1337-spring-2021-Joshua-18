#include"tic_tac_toe.h"
#include<iostream>

using std::cin, std::cout,  std::string;

int main() 
{
	
	string player;
	int position;
	char choice;
	
	do
	{
		tic_tac_toe game;
		
			cout<<"\n";
			cout<<"Please enter x or o to start the TicTacToe game: ";
			cin>>player;
			game.start_game(player);
			game.display_board();
			
		do
		{
		
		while (!(player == "x" || player == "o"))
		{
			cout<<"ERROR: invalid letter!"<<"\n";
			cout<<"Please enter x or o to start the TicTacToe game: ";
			cin>>player;
			game.start_game(player);
			game.display_board();
		}
		
			cout<<"\nIt's "<<game.get_player()<<"'s turn."<<" Please choose a free slot on the board using numbers from 1-9: ";
			cin>>position;
			while (position < 1 || position > 9)
			{
				// infinite loop if user chooses a character.
				cout<<"Invalid input, please choose position from 1 - 9: ";
				cin>>position;
				cout<<"\n";
			}
			
			game.mark_board(position);
			game.display_board();

		} while (game.game_over() == false);
		
		if (game.get_winner() == "C")
		{
			cout<<"Its a tie! ";
		}
		
		else
		cout<<"\nOh no! Game over..."<<"\n";
		cout<<game.get_winner()<<" won this round!"<<"\n";
		cout<<"Press Y to play again or any character to end the game: ";
		cin>>choice;

	} while (toupper(choice) == 'Y');

	return 0;
}