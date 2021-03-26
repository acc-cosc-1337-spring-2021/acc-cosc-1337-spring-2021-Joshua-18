//write include statements
#include "dna.h"
#include <iostream>
#include<string>
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice_loop;
	string gc_choice;
	string dna;

	do
	{	
		cout<<"\n";
		cout<<"Enter 1 to get GC content or\n";
		cout<<"Enter 2 to get DNA complement"<<"\n";

		cout<<"Enter your choice: ";
		cin>>gc_choice;
		
			if (gc_choice == "1")
			{
				cout<<"Enter a DNA string in caps: ";
				cin>>dna;
				cout<<"Your DNA strig as a GC content is: "<<get_gc_content(dna)<<"\n";
			}
			else if (gc_choice == "2")
			{
				cout<<"Enter a DNA string in caps: ";
				cin>>dna;
				cout<<"Your DNA strig as a DNA complement is: "<<get_dna_complement(dna)<<"\n";
			}
			else
			{
				cout<<"Error: invalid choice!"<<"\n";
			}
		
			cout<<"Run this program again? (Enter Y or y): ";
			cin>>choice_loop;

		
	} while (choice_loop == 'Y' || choice_loop == 'y');
	

	return 0;
}