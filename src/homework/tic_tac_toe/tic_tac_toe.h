//h
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <string>
#include <vector>


using std::string, std::vector;

class tic_tac_toe
{

    friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe& game);
    friend std::istream& operator>>(std::istream& in, tic_tac_toe& game);

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const;
    string get_winner();

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    string winner;
    vector<string> pegs{9, " "};
};

#endif