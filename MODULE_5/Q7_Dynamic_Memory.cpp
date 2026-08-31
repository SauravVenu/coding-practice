#include<iostream>
using namespace std;

int main(){
    int* p = new int(50);
    cout << "Initial : "<<*p <<endl;

    *p = 100;
    cout << "After Change : "<<*p <<endl;

    delete p;
    return 0;
}