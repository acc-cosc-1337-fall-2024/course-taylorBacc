#include "for.h"
#include<iostream>

int sum_of_squares_for(int num)
{
    auto sum = 0;

    for(auto i=0; i<= num; i++)
    {
        sum = sum + i*i;
    }

    return sum;
}

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/

