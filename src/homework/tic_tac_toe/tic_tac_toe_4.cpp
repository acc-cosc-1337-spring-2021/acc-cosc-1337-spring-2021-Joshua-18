#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool tic_tac_toe_4::check_column_win()
{

// values 0 , 4 , 8, 12
    if (pegs[0] == "x" && pegs[4] == "x" && pegs[8] == "x" && pegs[12] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[4] == "o" && pegs[8] == "o" && pegs[12] == "o")
    {
        return true;
    }
// values 1, 5, 9, 13
    if (pegs[1] == "x" && pegs[5] == "x" && pegs[9] == "x" && pegs[13] == "x")
    {
        
        return true;
    }
     if (pegs[1] == "o" && pegs[5] == "o" && pegs[9] == "o" && pegs[13] == "o")
    {
        return true;
    }
// values 2, 6, 10, 14
     if (pegs[2] == "x" && pegs[6] == "x" && pegs[10] == "x" && pegs[14] == "x")
    {
        return true;
    }
    if (pegs[2] == "o" && pegs[6] == "o" && pegs[10] == "o" && pegs[14] == "o")
    {
        return true;
    }
// values 3, 7, 11, 15
     if (pegs[3] == "x" && pegs[7] == "x" && pegs[11] == "x" && pegs[15] == "x")
    {
        return true;
    }
    if (pegs[3] == "o" && pegs[7] == "o" && pegs[11] == "o" && pegs[15] == "o")
    {
        return true;
    }
    return false;
}



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool tic_tac_toe_4::check_row_win()
{
//  values 0, 1, 2, 3
    if (pegs[0] == "x" && pegs[1] == "x" && pegs[2] == "x" && pegs[3] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[1] == "o" && pegs[2] == "o" && pegs[3] == "o")
    {
        return true;
    }

//  values 4, 5, 6, 7
    if (pegs[4] == "x" && pegs[5] == "x" && pegs[6] == "x" && pegs[7] == "x")
    {
        return true;
    }
    if (pegs[4] == "o" && pegs[5] == "o" && pegs[6] == "o" && pegs[7] == "o")
    {
        return true;
    }

//  values 8, 9, 10, 11
    if (pegs[8] == "x" && pegs[9] == "x" && pegs[10] == "x" && pegs[11] == "x")
    {
        return true;
    }
    if (pegs[8] == "o" && pegs[9] == "o" && pegs[10] == "o" && pegs[11] == "o")
    {
        return true;
    }

//  values 12, 13, 14, 15
     if (pegs[12] == "x" && pegs[13] == "x" && pegs[14] == "x" && pegs[15] == "x")
    {
        return true;
    }
    if (pegs[12] == "o" && pegs[13] == "o" && pegs[14] == "o" && pegs[15] == "o")
    {
        return true;
    }
    return false;
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool tic_tac_toe_4::check_diagonal_win()
{
//  values 0, 5, 10, 15
    if (pegs[0] == "x" && pegs[5] == "x" && pegs[10] == "x" && pegs[15] == "x")
    {
        return true;
    }
    if (pegs[0] == "o" && pegs[5] == "o" && pegs[10] == "o" && pegs[15] == "o")
    {
        return true;
    }

//  values 3, 6, 9, 12
   if (pegs[3] == "x" && pegs[6] == "x" && pegs[9] == "x" && pegs[12] == "x")
    {
        return true;
    }
    if (pegs[3] == "o" && pegs[6] == "o" && pegs[9] == "o" && pegs[12] == "o")
    {
        return true;
    }

    return false;
}