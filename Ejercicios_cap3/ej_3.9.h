#include <string>
#include <iostream>
class Account {
public:

    Account(std::string accountName, int initialBalance)
        : name{accountName} {

        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }

    void withdraw (float getWithdraw){
        if (getWithdraw <= balance){
            balance = balance - getWithdraw;
            std::cout<<"Withdrawing $"<<getWithdraw<< " ...";
        }
        else {
            std::cout<<"Withdraw amount exceeded account balance.";
        }
    }
    int getBalance() const {
        return balance;
    }

    void setName (std::string accountName){
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
    int balance{0};
};
