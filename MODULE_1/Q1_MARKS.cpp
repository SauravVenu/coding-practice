#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum            : " << a + b << endl;
    cout << "Difference     : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division       : " << a / b << endl;
    cout << "Modulus        : " << a % b << endl;

    return 0;
}