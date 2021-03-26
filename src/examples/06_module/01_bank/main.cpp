#include<iostream>
using std::cout;
#include "bank_account.h"

int main()
{
	// string name;// creates a string var in memory
	// 			//create an instance of an object

	BankAccount account;//variable-an instance of BankAccount object
	cout<<"Balance: "<<account.get_balance()<<"\n";


	return 0;
}