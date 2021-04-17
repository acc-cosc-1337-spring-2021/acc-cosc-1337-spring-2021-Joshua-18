//cpp
#include "tic_tac_toe_manager.h"
#include<iostream>
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto game: manager.games)
    {
        out<<game<<"\n";
    }
    out<<"O-wins: "<<manager.o_win<<"\n";
    out<<"X-wins: "<<manager.x_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

    return out;
}

void TicTacToeManager::save_game(tic_tac_toe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

 void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
 {
     o = o_win;
     w = x_win;
     t = ties;
 }

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "x")
    {
        x_win = x_win + 1;
    }
    else if (winner == "o")
    {
        o_win = o_win + 1;
    }
    else
    {
        ties = ties + 1;
    }
    
}