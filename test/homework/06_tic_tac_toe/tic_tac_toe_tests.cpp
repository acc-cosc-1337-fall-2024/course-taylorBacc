#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test full games 3x3 grid"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE(game->get_player() == "X");

	game->start_game("O");
	REQUIRE(game->get_player() == "O");

	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");

	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(2); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(3); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(4); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(7); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	game->start_game("X");
	game->mark_board(7); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("test manager for 3x3 grid"){
	std::unique_ptr<TicTacToe> game;
	TicTacToeManager mgr;
	
	int x;
	int o;
	int t;

	game = std::make_unique<TicTacToe3>(); //tie 3x3
	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe3>(); //col win 3x3
	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe3>(); //col win 3x3
	game->start_game("O");
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe4>(); //row win 4x4
	game->start_game("O");
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe4>(); //diag win 4x4
	game->start_game("O");
	game->mark_board(1); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe4>(); //col win 4x4
	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //x
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
	*game;
	mgr.save_game(game);

	game = std::make_unique<TicTacToe4>(); //tie 4x4
	game->start_game("X");
	game->mark_board(1); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(2); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(3); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(4); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(6); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(5); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(8); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(7); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(9); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(10); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(11); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(12); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(13); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(14); //o
	REQUIRE(game->game_over() == false);
	game->mark_board(15); //x
	REQUIRE(game->game_over() == false);
	game->mark_board(16); //o
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	*game;
	mgr.save_game(game);
	

	mgr.get_winner_total(x, o, t);
	REQUIRE(x == 2);
	REQUIRE(o == 3);
	REQUIRE(t == 2);
}

