//add include statements
#include<repetition.h>
//add function(s) code here
int factorial(int num)
{
    auto sum = 1;
    while(num > 0)
    {
        sum = sum * num;
        num--;
    }

    return sum;
}

int gcd(int num1, int num2)
{
    do
    {
        if(num1 < num2)
        {
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }
        else if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }while(not (num1 - num2 == 0));

    return num1;
}