#include <iostream>
using namespace std;

int main(){
    int numbers[5];

    cout<< " Enter the numbers : ";
    for(int i=0; i<5 ;i++){
        cin >> numbers[i];
    }

    cout << " First = " << numbers[0] << endl;
    cout << " Last = " << numbers[4] << endl;
    cout << " Sum = " << numbers[0] + numbers[4];

    return 0;
}
