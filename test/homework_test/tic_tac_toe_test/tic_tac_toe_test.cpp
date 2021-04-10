#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

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
}

TEST_CASE("Test win by third column", "set positions for first player X to 3,6,9.")
{
	tic_tac_toe game;

	game.start_game("x");
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
}

TEST_CASE("Test win by third row", "set positions for first player X to 7,8,9.")
{
	tic_tac_toe game;

	game.start_game("x");
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
}

TEST_CASE("Test win diagonally from bottom left", "set positions for first player X to 7,5,3.")
{
	tic_tac_toe game;

	game.start_game("x");
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
}