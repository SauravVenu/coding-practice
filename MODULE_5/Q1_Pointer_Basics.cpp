#include <iostream>
using namespace std;

int main() {
    int x=50;
    int* p =&x;
    cout << x << endl;
    cout <<&x << endl;
    *p =100;
    cout<<x;

    return 0;
}