//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout
using std::cout;		using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	// WARNING! choice INPUT OTHER THAN CHAR CAN CAUSE INFINITE LOOP!
	// SAME IF YOU ENTER ANYTHING OTHER THAN AN INTEGER FOR num
	char choice;
	int num;
	// outter do while loop that executes inner do while loop if the user chooses Y
	do
	{
		// inner do while loop asks for a number
		do
		{
			cout<<"\nPlease enter a number: ";
			cin>>num;
				// while loop for input validation of range betweem 1-10
				while ((num <= 0) || (num > 10))
				{
					cout<<"\nERROR: number has to be in range 1 - 10!\n";
					cout<<"\nPlease enter a number: ";
					cin>>num;
				}
			
		} while (num <= 0  || num > 10);
		// calls and displays the factional func when usr input is between 1-10
		cout<<"The answer to "<<num<<" factorial is: "<<factorial(num);

		cout<<"\nDo you want to enter a new number? (Y/N): ";
		cin>>choice;
	
	} while (toupper(choice) == 'Y');

	return 0;
}