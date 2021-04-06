//bank_account.h

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_bank_balance()const{return branch_balance;}

private:
    int branch_balance;
};

#endif


#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);
friend void BranchBank::update_balance(int b);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
friend std::istream& operator>>(std::istream& in, BankAccount& account);
friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);

public://access specifier USERS OF OUR CLASS(OTHER OBJECTS) CAN SEE WHAT'S IN PUBLIC
    BankAccount() = default;///synthesized default constructor
    explicit BankAccount(int b) : balance(b){ bank_balance += balance;}
    int get_balance()const{return balance;}
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private://access specifier-ONLY BANK ACCOUNT CLASS SEES DATA/FUNCTIONS IN PRIVATE
    int balance{0};//1 customer's balance, protect data integry-Encapsulation
    static int bank_balance;//all the bank's customer balances
};

//FREE FUNCTIONS-NOT PART OF THE BANK ACCOUNT CLASS!!!!!!!
void display_balance(const BankAccount& account);
BankAccount get_account(int balance);

#endif