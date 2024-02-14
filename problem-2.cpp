#include<iostream>
using namespace std;

class Account{
    public:
    long accountNumber;
    string accountHolder;
    long balance;

    Account(long accNumber, string accHolder){
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = 0;
        cout << "Account " << accountNumber<< " created with balance "<< balance << endl;
    };

    Account(long accNumber, string accHolder, long rBalance){
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = rBalance;
        cout << "Account " << accountNumber << " created with balance " << balance << endl;
    }

    void deposit(long amount){
        balance = balance + amount;
        cout << "Deposit to " << accountNumber << " : " << amount <<" New Balance: " << balance<< endl;
    }

    void withdrawal(long amount){
        balance = balance - amount;
        cout << "Withdrawal from " << accountNumber << " : " << amount << " New Balance: "<< balance << endl;
    }
};

int main(){
    Account account1(1001, "Alice");
    Account account2(1002, "Bob", 500);
    account1.deposit(1500);
    account1.withdrawal(800);
    return 0;
}