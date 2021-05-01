//cpp
#include "tic_tac_toe_data.h"

void TicTacToeData::save_games(const std::vector<std::unique_ptr<tic_tac_toe>>& games)
{
    std::ofstream out_file;
    out_file.open(file_name);

    if(out_file.is_open())
    {
        for(auto&game : games)
        {
            for(auto& peg: game->get_pegs())
            {
                out_file<<peg;
            }
            out_file<<game->get_winner();
            out_file<<"\n";
        }
    }
    out_file.close();
}

std::vector<std::unique_ptr<tic_tac_toe>> TicTacToeData::get_games()
{
    vector<std::unique_ptr<tic_tac_toe>> games;
    std::ifstream in_file;
    in_file.open(file_name);
    string line;

    if(in_file.is_open())
    {
        while (std::getline(in_file, line))
        {
            vector<string> pegs;
            for(size_t i =0; i< (line.size() -1); ++i)
            {
                string ch(1, line[i]);
                pegs.push_back(ch);
            }

            string winner{line[line.size()-1]};
            std::unique_ptr<tic_tac_toe> game;

            if (pegs.size() == 9)
            {
                game = std::make_unique<tic_tac_toe_3>(pegs, winner);
            }
            else if (pegs.size() == 16)
            {
                game = std::make_unique<tic_tac_toe_4>(pegs, winner);
            }
            games.push_back(std::move(game));
        }
        in_file.close();
    }

    return games;

}