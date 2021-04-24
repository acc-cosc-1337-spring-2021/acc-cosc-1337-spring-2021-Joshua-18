//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

std::istream& operator>>(std::istream& in, tic_tac_toe& game)
{
    int position;
    if (game.pegs.size() == 9)
    {
    cout<<"\nIt's "<<game.get_player()<<"'s turn."<<" Please choose a free slot on the board using numbers from 1-9: ";
    in>>position;
        while (position < 1 || position > 9)
        {
            // infinite loop if user chooses a character.
            cout<<"Invalid input, please choose position from 1 - 9: ";
            cin>>position;
            cout<<"\n";
        }
                
        game.mark_board(position);
        return in;
    }
    else if (game.pegs.size() == 16)
    {
        cout<<"\nIt's "<<game.get_player()<<"'s turn."<<" Please choose a free slot on the board using numbers from 1-16: ";
        in>>position;
        while (position < 1 || position > 16)
        {
            // infinite loop if user chooses a character.
            cout<<"Invalid input, please choose position from 1 - 16: ";
            cin>>position;
            cout<<"\n";
        }
                
        game.mark_board(position);
        return in;
    }
    

}


std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game)
{
    if (game.pegs.size() == 9)
    {
    out<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<"\n";
    out<<"--+---+--"<<"\n";
    out<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<"\n";
    out<<"--+---+--"<<"\n";
    out<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<"\n";  
    return out;
    }
    else if (game.pegs.size() == 16)
    {
    out<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<" | "<<game.pegs[3]<<"\n";
    out<<"--+---+---+--"<<"\n";
    out<<game.pegs[4]<<" | "<<game.pegs[5]<<" | "<<game.pegs[6]<<" | "<<game.pegs[7]<<"\n";
    out<<"--+---+---+--"<<"\n";
    out<<game.pegs[8]<<" | "<<game.pegs[9]<<" | "<<game.pegs[10]<<" | "<<game.pegs[11]<<"\n";
    out<<"--+---+---+--"<<"\n";
    out<<game.pegs[12]<<" | "<<game.pegs[13]<<" | "<<game.pegs[14]<<" | "<<game.pegs[15]<<"\n";   
    return out;
    }
    
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

string tic_tac_toe::get_winner()
{
    return winner;
}

bool tic_tac_toe::check_column_win()
{


    return false;
}

bool tic_tac_toe::check_row_win()
{

    return false;
}

bool tic_tac_toe::check_diagonal_win()
{

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