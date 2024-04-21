#include "tic_tac_toe_3.h"
#include<iostream>

bool TicTacToe3::check_column_win()
{
    int col1 = 0; //0,3,6
    int col2 = 0; //1,4,7
    int col3 = 0; //2,5,8

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==3 || i==6)
        {
            if(pegs[i]=="X")
            {
                col1++;
            }
            else if(pegs[i]=="O")
            {
                col1--;
            }
        }
        else if(i==1 || i==4 || i==7)
        {
            if(pegs[i]=="X")
            {
                col2++;
            }
            else if(pegs[i]=="O")
            {
                col2--;
            }
        }
        else if(i==2 || i==5 || i==8)
        {
            if(pegs[i]=="X")
            {
                col3++;
            }
            else if(pegs[i]=="O")
            {
                col3--;
            }
        }
    }

    if(col1==3||col1==-3||col2==3||col2==-3||col3==3||col3==-3)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe3::check_row_win()
{
    int row1 = 0; //0,1,2
    int row2 = 0; //3,4,5
    int row3 = 0; //6,7,8

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==1 || i==2)
        {
            if(pegs[i]=="X")
            {
                row1++;
            }
            else if(pegs[i]=="O")
            {
                row1--;
            }
        }
        else if(i==3 || i==4 || i==5)
        {
            if(pegs[i]=="X")
            {
                row2++;
            }
            else if(pegs[i]=="O")
            {
                row2--;
            }
        }
        else if(i==6 || i==7 || i==8)
        {
            if(pegs[i]=="X")
            {
                row3++;
            }
            else if(pegs[i]=="O")
            {
                row3--;
            }
        }
    }

    if(row1==3||row1==-3||row2==3||row2==-3||row3==3||row3==-3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe3::check_diagonal_win()
{
    int diag1 = 0; //0,4,8
    int diag2 = 0; //6,4,3

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==4 || i==8)
        {
            if(pegs[i]=="X")
            {
                diag1++;
            }
            else if(pegs[i]=="O")
            {
                diag1--;
            }
        }

        if(i==6 || i==4 || i==2)
        {
            if(pegs[i]=="X")
            {
                diag2++;
            }
            else if(pegs[i]=="O")
            {
                diag2--;
            }
    
        }
    }

    if(diag1==3||diag1==-3||diag2==3||diag2==-3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe3::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i+=3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}