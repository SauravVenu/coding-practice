#include <iostream>
using namespace std;

int main(){

    int number = 10;
    int &ref = number;

    ref = 50;

    cout << "Number = "<< number << endl;
    cout << "Reference = "<< ref << endl;

    return 0;
}