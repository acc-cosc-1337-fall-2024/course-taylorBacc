#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include <string>
#include<memory>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager mgr;
	string first_player;
	char user_choice = 'y';
	int x;
	int o;
	int t;
	char game_size;

	do
	{
		std::unique_ptr<TicTacToe> game;

		cout<<"3x3 or 4x4 grid size? (3 or 4): ";
		cin>>game_size;

		while(game_size != '3' && game_size != '4')
		{
			cout<<"Incorrect value, only enter 3 or 4: ";
			cin>>game_size;
		}
		
		if(game_size == '3')
			{
				game = std::make_unique<TicTacToe3>();
			}
			else if(game_size == '4')
			{
				game = std::make_unique<TicTacToe4>();
			}

		cout<<"Enter first player: ";
		cin>>first_player;

		while(first_player != "X" && first_player != "O")
		{
			cout<<"Please enter only X or O: ";
			cin>>first_player;
		}

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}
		if(game->get_winner()=="C")
		{
			cout<<"The game is a tie!\n";
		}
		else
		{
		cout<<"Winner is: "<<game->get_winner()<<"!\n";
		}

		*game;
		mgr.save_game(game);
		mgr.get_winner_total(x, o, t);

		cout<<"X Wins: "<<x<<".\nO Wins: "<<o<<".\nTies: "<<t<<".\n";

		cout<<"Play again, enter y or Y?";
		cin>>user_choice;

	}while(user_choice == 'y' || user_choice == 'Y');

	cout<<"Here are all the games that were played:\n";

	mgr.display_all_games();

	cout<<"Thanks for playing!\n";

	return 0;
}