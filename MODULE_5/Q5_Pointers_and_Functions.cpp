#include<iostream>
using namespace std;

void swapValues(int* p1,int* p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout << "after swapping : "<<*p1 <<" "<<*p2;
}

int main(){
    

    int a = 10;
    int b = 20;

    cout << "before swap : "<<a <<" "<<b<<endl;
    swapValues(&a,&b);
    return 0;
}