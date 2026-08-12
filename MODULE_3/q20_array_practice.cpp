#include <iostream>
using namespace std;

int main(){

    int arr[5],i,search,sum=0;
    bool found =false;

    cout << " Enter the marks : ";

    for(i=0;i<5;i++){
     cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for(i=0;i<5;i++){
        sum = sum + arr[i];
    }
    double average = double(sum)/5;

    cout << " Sum is : " << sum << endl ;
    cout << " Average is : " << average << endl ;

    for(i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout << " Largest is : " << largest << endl;
    cout << " Smallest is : " << smallest << endl;

    cout << " Enter the search element : ";
    cin >> search;
    cout << endl;

    for(i=0;i<5;i++){
        if(arr[i]==search){
            found=true;
            break;
        }
    }

    if(found==true){
        cout << " Element found at the index : " << i << endl;
    }else{
        cout << " Element not found : " << endl;
    }
    
    return 0;
}