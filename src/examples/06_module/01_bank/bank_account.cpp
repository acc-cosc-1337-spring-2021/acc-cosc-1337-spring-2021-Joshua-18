//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{ 
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }        
}

int BankAccount::bank_balance = 0;

//FRIEND FREE FUNCTION
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Display balance: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& account)
{
    out<<"Overloaded ostream Display balance: "<<account.balance<<"\n"; 

    return out;   
}

std::istream& operator>>(std::istream& in, BankAccount& account)
{
    int amount = 0;
    std::cout<<"Enter amount: ";
    in>>amount;
    account.balance += amount;

    return in; 
}

BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
{
    BankAccount account(a1.balance + a2.balance);
    return account;
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


//======branch bank class
void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}