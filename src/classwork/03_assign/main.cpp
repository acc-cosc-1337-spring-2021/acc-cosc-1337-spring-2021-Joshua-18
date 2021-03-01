//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
#include<iostream>
using std::cout;		using std::cin;		using namespace std;
int main() 
{
	int grade;
	cout<<"Please enter your grade in numbers: ";
	cin>>grade;

	if (grade >= 0 && grade <= 100)
	{
		cout<<"Your grade of "<<grade<<" using if statement is: "<<get_letter_grade_using_if(grade)<<"\n";
		cout<<"Your grade of "<<grade<<" using switch case is: "<<get_letter_grade_using_switch(grade)<<"\n";
	}
	else
	{
		cout<<"Invalid input";
	}
	return 0;
}

