//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool tic_tac_toe::game_over()
{
    return check_board_full();
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

void tic_tac_toe::display_board()const
{
    cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
    cout<<"--+---+--"<<"\n";
    cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";  
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