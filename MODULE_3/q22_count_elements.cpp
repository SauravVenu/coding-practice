#include<iostream>
using namespace std;

int main(){
    int arr[8],count=0;
    cout << " enter the numbers: ";

    for(int i = 0; i<8;i++){
        cin >> arr[i];
    }

    for(int i = 0; i <8 ; i++){
        if(arr[i]>50){
            count++;
        }
    }

    cout << " no of elements greater than 50 is : " << count;

    return 0;
}