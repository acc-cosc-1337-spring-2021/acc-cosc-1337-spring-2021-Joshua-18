//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{ 
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//FREE FUNCTIONS NOT PART OF THE BANK ACCOUNT CLASS!!!!!!
void display_balance(const BankAccount& account)
{
    std::cout<<"Display balance: "<<account.get_balance()<<"\n";
}

BankAccount get_account(int balance)
{
    BankAccount account(balance);

    return account;
}