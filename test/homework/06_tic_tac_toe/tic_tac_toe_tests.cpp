#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full"){
	TicTacToe game;

	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.start_game("O");
	REQUIRE(game.get_player() == "O");

	game.start_game("X");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //x
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

	game.start_game("X");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(7); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(2); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(3); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(4); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(4); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(7); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(1); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //x
	REQUIRE(game.game_over() == true);

	game.start_game("X");
	game.mark_board(7); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //x
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //o
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //x
	REQUIRE(game.game_over() == true);
}