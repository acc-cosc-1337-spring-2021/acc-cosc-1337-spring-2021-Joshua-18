//h
#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

#include "tic_tac_toe.h"
#include<vector>

class TicTacToeManager 
{

    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    void save_game(tic_tac_toe b);
    void get_winner_total(int& o, int& w, int& t);

private:
    vector<tic_tac_toe>games;
    int x_win = 0;
    int o_win = 0;
    int ties  = 0;
    void update_winner_count(string winner);

};

#endif