#include<iostream>
using namespace std;

int main(){
    int arr[]{5,10,15,20,25};
    int* p =&arr[0];

    for(int i=0;i<5;i++){ // arr[i]= *(arr+i)
       cout << *(p+i)<<" "; // instead of p we can also use arr
    }
    return 0;
}