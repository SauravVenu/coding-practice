#include<iostream>
using namespace std;

int main(){
    int arr[6];

    cout << "enter the elements : ";
    for(int i=0;i<6;i++){
      cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i=1;i<6;i++){
       if(arr[i]>largest){
        secondLargest = largest;
        largest = arr[i];
       }else if(arr[i]>secondLargest){
        secondLargest = arr[i];
       }
    }

    cout << "Largest = "<<largest << endl;
    cout << "Second largest = " << secondLargest << endl;

    return 0;

}