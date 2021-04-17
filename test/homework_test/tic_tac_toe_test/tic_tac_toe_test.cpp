#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
	tic_tac_toe game;

	game.start_game("X");
	
	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(8);
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	tic_tac_toe game;

	game.start_game("x");
	REQUIRE(game.get_player() == "x");
}

TEST_CASE("Test first player set to O")
{
	tic_tac_toe game;

	game.start_game("o");
	REQUIRE(game.get_player() == "o");
}

TEST_CASE("Test win by first column", "set positions for first player X to 1,4,7.")
{
	tic_tac_toe game;

	game.start_game("x");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}


TEST_CASE("Test win by second column", "set positions for first player X to 2,5,8.")
{
	tic_tac_toe game;

	game.start_game("x");
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

TEST_CASE("Test win by third column", "set positions for first player O to 3,6,9.")
{
	tic_tac_toe game;

	game.start_game("o");
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

TEST_CASE("Test win by first row", "set positions for first player X to 1,2,3.")
{
	tic_tac_toe game;

	game.start_game("x");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

TEST_CASE("Test win by second row", "set positions for first player X to 4,5,6.")
{
	tic_tac_toe game;

	game.start_game("x");
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

TEST_CASE("Test win by third row", "set positions for first player O to 7,8,9.")
{
	tic_tac_toe game;

	game.start_game("o");
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

TEST_CASE("Test win diagonally from top left", "set positions for first player X to 1,5,9.")
{
	tic_tac_toe game;

	game.start_game("x");
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "x");
}

TEST_CASE("Test win diagonally from bottom left", "set positions for first player O to 7,5,3.")
{
	tic_tac_toe game;

	game.start_game("o");
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "o");
}

TEST_CASE("Test the get_winner class function")
{
	int o = 0;
	int x = 0;
	int ties = 0;
	TicTacToeManager manager;
	tic_tac_toe game1;

	//x wins
	game1.start_game("x");
	game1.mark_board(7);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(8);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);
	REQUIRE(game1.get_winner() == "x");
	manager.save_game(game1);
	manager.get_winner_total(o, x, ties);

	//o wins
	tic_tac_toe game2;
	game2.start_game("o");
	game2.mark_board(1);
	REQUIRE(game2.game_over() == false);
	game2.mark_board(9);
	REQUIRE(game2.game_over() == false);
	game2.mark_board(2);
	REQUIRE(game2.game_over() == false);
	game2.mark_board(7);
	REQUIRE(game2.game_over() == false);
	game2.mark_board(3);
	REQUIRE(game2.game_over() == true);
	REQUIRE(game2.get_winner() == "o");
	manager.save_game(game2);
	manager.get_winner_total(o, x, ties);

	//tie
	tic_tac_toe game3;
	game3.mark_board(1);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(2);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(3);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(4);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(5);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(7);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(6);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(9);
	REQUIRE(game3.game_over() == false);
	game3.mark_board(8);
	REQUIRE(game3.game_over() == true);
	REQUIRE(game3.get_winner() == "C");
	manager.save_game(game3);

	manager.get_winner_total(o, x, ties);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(ties == 1);
}