#include <iostream>
using namespace std;

void area(int length, int breadth =10 ){

    int area = length * breadth;
    cout << " Area is : " << area << endl;
}

int main(){

    area(5);
    area(5,20);

    return 0;
    
}