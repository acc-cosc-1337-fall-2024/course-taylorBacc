#include "tic_tac_toe_4.h"
#include<iostream>

bool TicTacToe4::check_column_win()
{
    int col1 = 0; //0,4,8,12
    int col2 = 0; //1,5,9,13
    int col3 = 0; //2,6,10,14
    int col4 = 0; //3,7,11,15

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==4 || i==8 || i==12)
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
        else if(i==1 || i==5 || i==9 || i==13)
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
        else if(i==2 || i==6 || i==10 || i==14)
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
        else if(i==3 || i==7 || i==11 || i==15)
        {
            if(pegs[i]=="X")
            {
                col4++;
            }
            else if(pegs[i]=="O")
            {
                col4--;
            }
        }
    }

    if(col1==4||col1==-4||col2==4||col2==-4||col3==4||col3==-4||col4==4||col4==-4)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool TicTacToe4::check_row_win()
{
    int row1 = 0; //0,1,2,3
    int row2 = 0; //4,5,6,7
    int row3 = 0; //8,9,10,11
    int row4 = 0; //12,13,14,15

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==1 || i==2 || i == 3)
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
        else if(i==4 || i==5 || i==6 || i==7)
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
        else if(i==8 || i==9 || i==10 || i==11)
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
        else if(i==12 || i==13 || i==14 || i==15)
        {
            if(pegs[i]=="X")
            {
                row4++;
            }
            else if(pegs[i]=="O")
            {
                row4--;
            }
        }
    }

    if(row1==4||row1==-4||row2==4||row2==-4||row3==4||row3==-4||row4==4||row4==-4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe4::check_diagonal_win()
{
    int diag1 = 0; //0,5,10,15
    int diag2 = 0; //12,9,6,3

    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(i==0 || i==5 || i==10 || i==15)
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

        if(i==12 || i==9 || i==6 || i==3)
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

    if(diag1==4||diag1==-4||diag2==4||diag2==-4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe4::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i+=4)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
    }
}