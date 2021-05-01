//h
#ifndef TIC_TAC_TOE_DATA
#define TIC_TAC_TOE_DATA
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<fstream>
#include<vector>
#include<string>
#include<memory>


class TicTacToeData
{
public:
    void save_games(const std::vector<std::unique_ptr<tic_tac_toe>>& games);
    std::vector<std::unique_ptr<tic_tac_toe>>get_games();

private:
    const std::string file_name{"tic_tac_toe_history.dat"};
};

#endif