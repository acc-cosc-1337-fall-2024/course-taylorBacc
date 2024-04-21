#include "tic_tac_toe_manager.h"
#include <iostream>

//public functions

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}
void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;

    //std::cout<<"X Wins: "<<x<<" O Wins: "<<o<<" Ties: "<<t<<"\n";
}

void TicTacToeManager::display_all_games()
{

    for(long unsigned int i=0; i < games.size(); i++)
    {
        auto& game = games[i];

        std::cout<<"\n";

        game->display_board();
        
    }
}


//private functions
void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}