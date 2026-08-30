#include<iostream>
using namespace std;

void swapValues(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout << "after swapping : "<<*a <<" "<<*b;
}

int main(){
    int a = 10;
    int b = 20;

    cout << "before swap : "<<a <<" "<<b<<endl;
    swapValues(&a,&b);
    return 0;
}