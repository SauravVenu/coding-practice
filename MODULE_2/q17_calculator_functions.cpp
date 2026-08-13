#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int subtract(int a , int b){
    return a-b;
}

int multiply(int a , int b){
    return a*b;
}

double divide(double a,double b){
    return a/b;
}


int main(){

    int x,y;

    cout << "enter two numbers : ";
    cin >> x >>y;

    int addition = add(x,y);
    int subtraction = subtract(x,y);
    int multiplication = multiply(x,y);
    double division = divide(x,y);

    cout << "Addition = " << addition << endl;
    cout << "Subtraction = " << subtraction << endl;
    cout << "Multiplication = " << multiplication << endl;
    cout << "Division = " <<division << endl;


    return 0;
}