#include<iostream>
using namespace std;

int main(){

    int sum=0,i;
    double average;
    int arr[5];

    cout << "Enter the numbers : ";

    for(i=0; i<5 ;i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    average = double(sum)/5;

    cout<< "Sum = "<< sum << endl;
    cout<< "Average = "<< average << endl;
    return 0;
}