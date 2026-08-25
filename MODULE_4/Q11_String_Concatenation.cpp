#include<iostream>
#include<string>
using namespace std;

int main(){
    string firstName;
    string secondName;

    cout << "enter the first name : ";
    cin >> firstName;

    cout << "enter second name : ";
    cin >> secondName;

    string fullName = firstName + " " + secondName;
    cout << "your full name is "<< fullName;

    return 0;
}