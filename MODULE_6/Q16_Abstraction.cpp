#include<iostream>
using namespace std;

double pi= 3.14;

class Shapes {   // Abstraction
    public:
    virtual void area()=0; // HIDING THE IMPLEMENTATION DETAILS , IT SAYS THAT THERE IS AREA FUNCTION BUT IT WONT SPECIFY IT , ITS CHILD CLASSES WILL SPECIFY IT
};
class Circle : public Shapes {
    public:
    void area(){
        cout << "area of a circle is : ";
    }
    int result (double r){
        return pi*r*r;
    }
};
class Rectangle : public Shapes {
    public:
    void area(){
        cout << "area of a rectangle is : ";
    }
    int result (double a, double b){
        return a*b;
    }
};

int main(){
    double a , b,r;

    cout << "enter the radius : ";
    cin >> r;
    cout << "enter the sides : ";
    cin >> a >> b;

    Circle c1;
    Rectangle r1;

    c1.area();
    double circle_area = c1.result(r);
    cout << circle_area <<endl;

    r1.area();
    double rectangle_area = r1.result(a,b);
    cout << rectangle_area << endl;

    return 0;
}


//WORK FLOW
/*
Shapes
   ↓
"area() must exist"
   ↓
doesn't specify how
   ↓
───────────────
↓             ↓
Circle      Rectangle
↓             ↓
defines      defines
area()       area()
*/