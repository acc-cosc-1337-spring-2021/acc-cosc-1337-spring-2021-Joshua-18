#include<iostream>
using std::cout;

#include "bank_account.h"

int main()
{
	// string name;// creates a string var in memory
	// 			//create an instance of an object

	BankAccount account = get_account(100);//variable-an instance of BankAccount object

	display_balance(account);

	auto balance = account.get_balance();
	
	cout<<"Balance: "<<balance<<"\n";

	cout<<"Deposit $50\n";
	account.deposit(50);

	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";
	
	return 0;
}