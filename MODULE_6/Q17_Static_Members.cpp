#include<iostream>
using namespace std;

class BankAccount {
    public:
    static int count;  // static is a shared variable acccessible by all the object in a class irrespective of each variable for each object

    BankAccount(){
        count++;    // once a BankAccounnt object is created the BankAccount constructor will be executed and teh count value will gets increased
    }
};
int BankAccount::count=0;  // :: is scope resolution operator . giving definition to the static variable and initializing it to 0

int main(){
    BankAccount b1;
    BankAccount b2;
    BankAccount b3;
    BankAccount b4;

    cout << "The number of accounnts created is : " << count << endl;
    return 0;
}