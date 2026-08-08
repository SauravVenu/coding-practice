#include <iostream>
using namespace std;

int area_square, area_rectangle;

void area (int length){

    area_square = length * length ;
    cout << " Area of a square is : " << area_square << endl ;
}
void area (int length, int breadth){

    area_rectangle = length * breadth ;
    cout << " Area of a rectangle is : "<< area_rectangle << endl ;
}

int main(){
    area(10);
    area(10,20);
    return 0;
}

