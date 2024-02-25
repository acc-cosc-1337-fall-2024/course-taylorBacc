//write include statements
#include <iostream>
#include "repetition.h"
//write using statements

using std::cout, std::cin;

int main() 
{
	auto option = 0;

	do{
		cout<<"1-Factorial\n2-Greatest Common Divisor\n3-Exit\nChoose an option from above(1-3): ";
		
		cin>>option;

		if(option == 1)
		{
			auto num = 0;
			cout<<"Choose a number to get the factorial of: ";
			cin>>num;

			cout<<"The factorial of "<<num<<" is "<<factorial(num)<<".\n";
		}
		else if(option == 2)
		{
			auto num1 = 0;
			auto num2 = 0;
			cout<<"Choose two numbers to get the greatest common divisor of.\nNumber 1: ";
			cin>>num1;
			cout<<"Number 2: ";
			cin>>num2;

			cout<<"The greatest common divisor of "<<num1<<" and "<<num2<<" is "<<gcd(num1, num2)<<".\n";
		}

		else if(option == 3)
		{
			auto exit_option = 'N';
			cout<<"Are you sure you want to exit(Y/N)?: ";

			do
			{
				cin>>exit_option;
				exit_option = toupper(exit_option);
				if(exit_option == 'N')
				{
					option = 0;
				}
				else if(exit_option == 'Y')
				{
					cout<<"Exited successfully.\n";					
				}
				else
				{
					cout<<"Please enter only Y or N: ";
				}
			}while(not(exit_option == 'N'));
		}
		else
		{
			cout<<"\nSelection out of range, select from 1 to 3.\n";
		}
	}while(not(option == 3));

	return 0;
}
