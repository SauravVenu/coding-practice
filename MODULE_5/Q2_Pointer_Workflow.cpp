#include<iostream>
using namespace std;

int main(){
    int num = 25;
    int* p = &num;
    cout << num <<endl;
    cout << &p <<endl;
    cout <<*p <<endl;
    *p = 75;
    cout << num;
    return 0;
}