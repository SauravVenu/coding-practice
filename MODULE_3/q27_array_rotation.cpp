#include<iostream>
using namespace std;

int main(){
    int arr[6],i;
    cout << "enter the array elements : ";
    for(i=0;i<6;i++){
        cin >> arr[i];
    }
    
     cout << " before left rotation the array will become : ";
     for(int i =0 ;i<6;i++){
        cout << arr[i] << " ";
     }
     cout << endl;

    int temp = arr[0];
    for(i = 0;i < 5;i++){
        arr[i]=arr[i+1];
    }
    arr[5]=temp;
    
    cout << "After left rotation the array will become : ";
    for(int i=0 ;i<6;i++){
        cout << arr[i]<< " ";
    }
    
    return 0;
}