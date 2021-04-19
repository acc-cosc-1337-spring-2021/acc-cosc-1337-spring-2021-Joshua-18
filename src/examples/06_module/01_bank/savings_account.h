//savings_account.h
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(){/*empty function code block*/}
    SavingsAccount(int b) : BankAccount(b) {/*empty function code block*/}
    int get_balance()const override{return balance * interest_rate * time + balance;}
    double get_interest_earned()const{return balance * interest_rate * time;}
private:
    const double interest_rate {.05};
    const double time{3/12.0};
};



#endif