//h
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
#include <vector>
#include<iostream>


using std::string, std::vector;

class tic_tac_toe
{

    friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game);
    friend std::istream& operator>>(std::istream& in, tic_tac_toe& game);

public:
    tic_tac_toe(){}
    tic_tac_toe(int size) : pegs(size*size, " "){}
    tic_tac_toe(vector<string> p, string win) : pegs(p), winner(win){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const;
    string get_winner();
    std::vector<std::string> get_pegs()const{return pegs;}

protected:
    std::vector<std::string> pegs{};
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    string winner;
};

#endif