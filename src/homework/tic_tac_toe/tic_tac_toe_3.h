//h
#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H

#include "tic_tac_toe.h"

class tic_tac_toe_3 : public tic_tac_toe
{
public:
    tic_tac_toe_3() : tic_tac_toe(3){}
private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif