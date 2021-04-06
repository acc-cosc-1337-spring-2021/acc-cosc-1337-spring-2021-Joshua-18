#include<iostream>
#include<time.h>
using std::cout; using std::cin;

#include "atm.h"
#include "bank_account.h"

int main()
{
	// string name;// creates a string var in memory
	// 			//create an instance of an object

	srand(time(NULL));
	BankAccount account = get_account(100);
	BankAccount a1(100);
	BankAccount a2(200);
	BankAccount a3 = a1 + a2;//get_account(100);//variable-an instance of BankAccount object
	cout<<a3;
	//	display_balance(account);
	
	/*char choice;
	ATM atm;
	/*char choice;
	
	do
	{
		
		atm.scan_card();
		atm.display_balance();
		cout<<"Continue? y or n";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');*/

	/*cout<<sizeof(account)<<"\n";
	auto balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";
	cout<<"Deposit $50\n";
	account.deposit(50);
	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n\n";
	cout<<"Withdraw $10\n";
	account.withdraw(10);
	balance = account.get_balance();
	cout<<"Balance: "<<balance<<"\n";*/

	
	return 0;
}