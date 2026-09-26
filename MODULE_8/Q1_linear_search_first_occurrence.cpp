#include<iostream>
using namespace std;

int main(){
    int target,n;
    int index = -1;

    cout <<"enter the number of elements : ";
    cin >> n;

    cout << "enter the elements : ";

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "enter the target : ";
    cin >> target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    cout << index;
    return 0;
}