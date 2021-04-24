#include"tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<memory>

using std::cin, std::cout,  std::string;
using std::unique_ptr, std::make_unique;

int main() 
{
	
	string player;
	TicTacToeManager manager;
	char choice;
	int x = 0;
	int o = 0;
	int ties = 0;
	do
	{
		string game_grid;
		unique_ptr<tic_tac_toe> game;

		do
		{
			cout<<"\n";
			cout<<"Please choose 3 to play 3x3 or 4 to play 4x4: ";
			cin>>game_grid;
			cout<<"\n";
			if (game_grid == "3")
			{
				game = make_unique<tic_tac_toe_3>();
			}
			else if (game_grid == "4")
			{
				game = make_unique<tic_tac_toe_4>();
			}
			
		} while (!(game_grid == "3" || game_grid == "4"));

		do
		{
			cout<<"\n";
			cout<<"Please enter x or o to start the TicTacToe game: ";
			cin>>player;
			
		} while (!(player == "x" || player == "o"));	
			game->start_game(player);
		do
		{
		
		while (!(player == "x" || player == "o"))
		{
			cout<<"ERROR: invalid letter!"<<"\n";
			cout<<"Please enter x or o to start the TicTacToe game: ";
			cin>>player;
			game->start_game(player);
		}
			cin>> *game;
			cout<< *game;

		} while (game->game_over() == false);
		
		if (game->get_winner() == "x")
		{
			x = x +1;
		}
		else if (game->get_winner() == "o")
        {
            o =  o + 1;
        }
        else if (game->get_winner() == "C")
        {
            ties = ties + 1;
            cout<<"Game its a TIE~!\n";
        }
		
		else
		cout<<"\nOh no! Game over..."<<"\n\n";
		//cout<<game.get_winner()<<" won this round!"<<"\n";
		cout<<"\nO wins: "<<o<<"\n";
		cout<<"X wins: "<<x<<"\n";
		cout<<"Ties: "<<ties<<"\n";
		manager.save_game(game);
		cout<<"\n";
		manager.get_winner_total(o, x, ties);
		cout<<"Press Y to play again or any character to end the game: ";
		cin>>choice;
		cout<<"\n"<<manager;

	} while (toupper(choice) == 'Y');

	return 0;
}