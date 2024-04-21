#include"tic_tac_toe.h"
#include<iostream>
#include<vector>
#include<memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
    public:
        void save_game(std::unique_ptr<TicTacToe>& b);
        void get_winner_total(int& x, int& o, int& t);
        void display_all_games();

    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(std::string winner);
};

#endif