#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool tic_tac_toe_3::check_column_win()
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


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool tic_tac_toe_3::check_row_win()
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


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool tic_tac_toe_3::check_diagonal_win()
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