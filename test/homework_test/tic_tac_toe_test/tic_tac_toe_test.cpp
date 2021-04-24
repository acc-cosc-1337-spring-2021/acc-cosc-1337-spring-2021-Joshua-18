#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	REQUIRE(game->get_player() == "x");
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("o");
	REQUIRE(game->get_player() == "o");
}

TEST_CASE("Test win by first column", "set positions for first player X to 1,4,7.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}


TEST_CASE("Test win by second column", "set positions for first player X to 2,5,8.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test win by third column", "set positions for first player O to 3,6,9.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("o");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test win by first row", "set positions for first player X to 1,2,3.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test win by second row", "set positions for first player X to 4,5,6.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test win by third row", "set positions for first player O to 7,8,9.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("o");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test win diagonally from top left", "set positions for first player X to 1,5,9.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("Test win diagonally from bottom left", "set positions for first player O to 7,5,3.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_3>();

	game->start_game("o");
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("Test the get_winner class function")
{
	int o = 0;
	int x = 0;
	int ties = 0;
	TicTacToeManager manager;
	unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_3>();

	//x wins
	game1->start_game("x");
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "x");
	manager.save_game(game1);
	manager.get_winner_total(o, x, ties);

	//o wins
	unique_ptr<tic_tac_toe> game2 = make_unique<tic_tac_toe_3>();
	game2->start_game("o");
	game2->mark_board(1);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(9);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(2);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(7);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "o");
	manager.save_game(game2);
	manager.get_winner_total(o, x, ties);

	//tie
	unique_ptr<tic_tac_toe> game3 = make_unique<tic_tac_toe_3>();
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	manager.save_game(game3);

	manager.get_winner_total(o, x, ties);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(ties == 1);
}

/**********************************************************************************************
 * 																						      *
 * 									TEST TIC TAC TOE4!										  *
 * 																							  *	
 **********************************************************************************************/
TEST_CASE("4 Test game over if 9 slots are selected")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);

	game->mark_board(2);
	REQUIRE(game->game_over() == false);

	game->mark_board(3);
	REQUIRE(game->game_over() == false);

	game->mark_board(5);
	REQUIRE(game->game_over() == false);

	game->mark_board(4);
	REQUIRE(game->game_over() == false);

	game->mark_board(6);
	REQUIRE(game->game_over() == false);

	game->mark_board(8);
	REQUIRE(game->game_over() == false);

	game->mark_board(7);
	REQUIRE(game->game_over() == false);

	game->mark_board(9);
	REQUIRE(game->game_over() == false);

	game->mark_board(10);
	REQUIRE(game->game_over() == false);

	game->mark_board(11);
	REQUIRE(game->game_over() == false);

	game->mark_board(12);
	REQUIRE(game->game_over() == false);

	game->mark_board(14);
	REQUIRE(game->game_over() == false);

	game->mark_board(13);
	REQUIRE(game->game_over() == false);

	game->mark_board(16);
	REQUIRE(game->game_over() == false);

	game->mark_board(15);
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("4 Test first player set to X")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	REQUIRE(game->get_player() == "x");
}

TEST_CASE("4 Test first player set to O")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("o");
	REQUIRE(game->get_player() == "o");
}

TEST_CASE("4 Test win by first column", "set positions for first player X to 0 , 4 , 8, 12.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win by second column", "set positions for first player X to 1, 5, 9, 13.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win by third column", "set positions for first player O to 2, 6, 10, 14")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("o");
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("4 Test win by fourth column", "set positions for first player X to 3, 7, 11, 15.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}


TEST_CASE("4 Test win by first row", "set positions for first player X to 0, 1, 2, 3.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win by second row", "set positions for first player O to 4, 5, 6, 7.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("o");
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("4 Test win by third row", "set positions for first player x to 8, 9, 10, 11.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win by forth row", "set positions for first player O to 12, 13, 14, 15.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win diagonally from top left", "set positions for first player X to 0, 5, 10, 15.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("x");
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "x");
}

TEST_CASE("4 Test win diagonally from bottom left", "set positions for first player O to 3, 6, 9, 12.")
{
	unique_ptr<tic_tac_toe> game = make_unique<tic_tac_toe_4>();

	game->start_game("o");
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "o");
}

TEST_CASE("4 Test the get_winner class function")
{
	int o = 0;
	int x = 0;
	int ties = 0;
	TicTacToeManager manager;
	unique_ptr<tic_tac_toe> game1 = make_unique<tic_tac_toe_4>();

	//x wins
	game1->start_game("x");
	game1->mark_board(1);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(11);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(16);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "x");
	manager.save_game(game1);
	manager.get_winner_total(o, x, ties);

	//o wins
	unique_ptr<tic_tac_toe> game2 = make_unique<tic_tac_toe_4>();
	game2->start_game("o");
	game2->mark_board(4);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(1);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(7);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(2);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(10);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(13);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "o");
	manager.save_game(game2);
	manager.get_winner_total(o, x, ties);

	//tie
	unique_ptr<tic_tac_toe> game3 = make_unique<tic_tac_toe_4>();
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(10);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(11);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(12);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(14);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(15);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(16);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(13);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	manager.save_game(game3);

	manager.get_winner_total(o, x, ties);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(ties == 1);
}