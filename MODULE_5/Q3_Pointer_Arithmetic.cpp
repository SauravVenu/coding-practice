#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int* p = &arr[0];
    cout << *p << endl;
    p++;
    cout << *p << endl;
    p++;
    cout << *p <<endl;
    p++;
    return 0;
}
