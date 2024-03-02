#include "func.h"

using std::cout; using std::cin;

int main() 
{
	auto option = 0;

	do{
		cout<<"1-Get GC Content\n2-Get DNA Complement\n3-Exit\nChoose an option from above(1-3): ";
		
		cin>>option;

		if(option == 1)
		{
			std::string sequence;
			cout<<"Enter a DNA sequence: ";
			cin>>sequence;

			cout<<"\nThe GC Content of "<<sequence<<" is "<<get_gc_content(sequence)*100<<"%.\n\n";
		}
		else if(option == 2)
		{
			std::string sequence;
			cout<<"Enter a DNA sequence: ";
			cin>>sequence;

			cout<<"\nGenerating reverse complement of the DNA Sequence: "<<sequence<<"\nResult: "<<get_dna_complement(sequence)<<"\n\n";
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
