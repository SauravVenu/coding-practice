#include <iostream>
using namespace std;
int main() {
    int a, b;

    cout << " ENTER TWO NUNMBERS" << endl;
    cin >> a >>b;

    if(a>b) {

        cout<< a << " is greater than " << b << endl ;

    }else if (b>a) {

        cout<< b << " is greater than " << a << endl ;

    }else{

        cout<< " Both the numbers are same";

    }

    return 0;
}