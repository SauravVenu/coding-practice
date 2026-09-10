#include<iostream>
using namespace std;

int amount;

class BankAccount {
    private :
    int balance = 2000;

    public :

    void deposit(){
        balance = amount + balance;
        cout << "Balance after deposit is  : "<< balance << endl;
    }

    void withdraw(){
        balance = balance - amount;
        cout << "Balance after withdrawal is  : "<< balance << endl;
    }

    void displayBalance(){
        cout << "Current account balance is : "<< balance;
    }
    
    BankAccount(int amount){
        amount = amount;
    }
};

int main(){
    
    cout << "enter the amount ";
    cin >> amount;

    BankAccount b1(amount);

    b1.deposit();
    b1.withdraw();
    b1.displayBalance();
    
    return 0;
}