#include <iostream>
using namespace std;

int main(){

    int target;
    int count=0;
    int arr[8];

    cout << " enter the taget element : ";
    cin >> target;

    cout << " enter the elements : ";
    for(int i=0;i<8;i++){
        cin >> arr[i];
    }

    for(int i=0; i<8; i++){
        if(arr[i]==target){
            count++;
        }
    }

    cout << "No.of times "<<target<<" gets repeated is : "<< count;
    
    return 0;


}