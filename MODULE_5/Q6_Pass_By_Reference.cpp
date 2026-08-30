#include<iostream>
using namespace std;

void changeValues(int &x,int &y){
    x = 100;
    y = 200;
}

int main(){
    int x = 10;
    int y = 20;

    cout << "Before : "<<x << " "<<y <<endl;

    changeValues(x,y);

    cout << "After : "<<x <<" "<<y;

    return 0;
}