//h
#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<vector>
#include<memory>
#include<iostream>

using std::unique_ptr; 
using std::make_unique;

class TicTacToeManager 
{

    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& data);
    void save_game(unique_ptr<tic_tac_toe> &b);
    void get_winner_total(int& o, int& w, int& t);
    ~TicTacToeManager();

private:
    std::vector<std::unique_ptr<tic_tac_toe>> games;
    TicTacToeData data;
    int x_win = 0;
    int o_win = 0;
    int ties  = 0;
    void update_winner_count(std::string winner);

};

#endif