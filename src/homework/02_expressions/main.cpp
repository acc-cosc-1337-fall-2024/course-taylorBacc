//write include statements
#include<iostream>
#include "hwexpressions.h"


//write namespace using statement for cout
using std::cout;
using std::cin;

int main()
{
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	cout<<"Enter the base cost of the meal: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the percentage tip amount (ex. 0.20 for 20%): ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tip_amount + tax_amount;

	cout<<"Meal Amount: "<<meal_amount<<"\nSales Tax: "<<tax_amount<<"\nTip Amount: "<<tip_amount<<"\nTotal: "<<total<<"\n";

	return 0;
}
