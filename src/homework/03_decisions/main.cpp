//write include statements
#include "decisions.h"
#include<iostream>

using std::cin; using std::cout;

int main() 
{
	auto option = 0;
	auto grade = 0;
	char letter_grade = ' ';

	cout<<"        MAIN MENU\n\n1-Letter grade using if\n2-Letter grade using switch\n3-Exit\n\nEnter an option: ";
	cin>>option;

	switch(option){
		case 1:
			cout<<"\nEnter a grade(0 to 100): ";
			cin>>grade;
			letter_grade = get_letter_grade_using_if(grade);
			if(grade > 100 || grade < 0)
			{
				cout<<"\n"<<grade<<" is out of range 0 to 100.\n";
			}
			else
			{
				cout<<"\nYour letter grade is: "<<letter_grade<<"\n";
			}
			
			break;
		case 2:
			cout<<"\nEnter a grade(0 to 100): ";
			cin>>grade;
			letter_grade = get_letter_grade_using_switch(grade);
			if(grade > 100 || grade < 0)
			{
				cout<<"\n"<<grade<<" is out of range 0 to 100.\n";
			}
			else
			{
				cout<<"\nYour letter grade is: "<<letter_grade<<"\n";
			}
			break;
		case 3:
			cout<<"\nExited routine.\n";
			break;
		default:
			cout<<"\nOption selected not valid.\n";
	}

	return 0;
}