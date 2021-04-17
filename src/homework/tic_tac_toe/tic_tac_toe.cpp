//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

std::istream& operator>>(std::istream& in, tic_tac_toe& game)
{
int position;
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
}


std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game)
{
    cout<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<"\n";  
}


bool tic_tac_toe::game_over()
{
     if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else  
    {
        return false;
    }
}

void tic_tac_toe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void tic_tac_toe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

string tic_tac_toe::get_player()const
{
    return player;
}

// void tic_tac_toe::display_board()const
// {
//     cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
//     cout<<"--+---+--"<<"\n";
//     cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
//     cout<<"--+---+--"<<"\n";
//     cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";  
// }

string tic_tac_toe::get_winner()
{
    return winner;
}

bool tic_tac_toe::check_column_win()
{

// values 0 , 3 , 6
    if (pegs[0] == "x" && pegs[3] == "x" && pegs[6] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[3] == "o" && pegs[6] == "o")
    {
        return true;
    }
// values 1 , 4, 7
    if (pegs[1] == "x" && pegs[4] == "x" && pegs[7] == "x")
    {
        
        return true;
    }
     if (pegs[1] == "o" && pegs[4] == "o" && pegs[7] == "o")
    {
        return true;
    }
// values 2, 5, 8
     if (pegs[2] == "x" && pegs[5] == "x" && pegs[8] == "x")
    {
        return true;
    }
    if (pegs[2] == "o" && pegs[5] == "o" && pegs[8] == "o")
    {
        return true;
    }
    return false;
}

bool tic_tac_toe::check_row_win()
{
//  values 0, 1, 2
    if (pegs[0] == "x" && pegs[1] == "x" && pegs[2] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[1] == "o" && pegs[2] == "o")
    {
        return true;
    }

//  values 3, 4, 5
    if (pegs[3] == "x" && pegs[4] == "x" && pegs[5] == "x")
    {
        return true;
    }
    if (pegs[3] == "o" && pegs[4] == "o" && pegs[5] == "o")
    {
        return true;
    }

//  values 6, 7, 8
    if (pegs[6] == "x" && pegs[7] == "x" && pegs[8] == "x")
    {
        return true;
    }
    if (pegs[6] == "o" && pegs[7] == "o" && pegs[8] == "o")
    {
        return true;
    }
    return false;
}

bool tic_tac_toe::check_diagonal_win()
{
//  values 0, 4, 8 
    if (pegs[0] == "x" && pegs[4] == "x" && pegs[8] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[4] == "o" && pegs[8] == "o")
    {
        return true;
    }

//  values 2, 4, 6
    if (pegs[2] == "x" && pegs[4] == "x" && pegs[6] == "x")
    {
        return true;
    }
    if (pegs[2] == "o" && pegs[4] == "o" && pegs[6] == "o")
    {
        return true;
    }

    return false;
}

void tic_tac_toe::set_winner()
{
    if (player == "x")
    {
        winner = "o";
    }
    else
    {
        winner = "x";
    }
    
}

void tic_tac_toe::set_next_player()
{
    if (player == "x")
    {
        player = "o";
    }
    else
    {
        player = "x";
    }
}

bool tic_tac_toe::check_board_full()
{
     bool board_full = true;
    for (std::size_t i = 0; i < pegs.size(); ++i)
    {
        if (pegs[i] == " ")
        {
            board_full = false;
            break;
        }
    }
    return board_full;
}

void tic_tac_toe::clear_board()
{
    for(std::size_t i = 0; i < pegs.size(); ++i){
        pegs [i] == " ";
    }
}