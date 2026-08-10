#include <iostream>
using namespace std;

int main(){

    int arr[5],i;
   
    cout<<"Enter 5 numbers : ";

    for(i=0;i<5;i++){
        cin >> arr[i];
}
    int max=arr[0];
    int min=arr[0];


for(i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }

    if(arr[i]<min){
        min=arr[i];
    }
}

cout << "Max = "<< max << endl;
cout << "Min = "<< min << endl;

return 0;
}