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

    for(int i=1;i<6;i++){    // if an element greater than the current element appears the if block will gets executed
       if(arr[i]>largest){
        secondLargest = largest;  
        largest = arr[i];
       }else if(arr[i]>secondLargest){  //if an element in between the largest and second largest appears the else block will gets executed
        secondLargest = arr[i];
       }
    }

    cout << "Largest = "<<largest << endl;
    cout << "Second largest = " << secondLargest << endl;

    return 0;

}