#include <iostream>
using namespace std;


void withdraw(int &balance){
   balance = balance-100;
    cout << " Inside function : "<< balance << endl ;
   
}

int main(){

int balance = 500;
withdraw(balance);
cout << "Inside main : "<< balance;

return 0;
}