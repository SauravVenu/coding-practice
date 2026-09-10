#include<iostream>
using namespace std;

class Shape {    // with virtual
   public:
   virtual void draw(){
    cout << "Based on the shape " << endl ;
   }
};
class Circle : public Shape {
    public:
    void draw(){
        cout << "Draws Circle ";
    }
};
int main(){
    Shape s1;
    Circle c1;

    Shape* s = &c1;   // s is the pointer with shape type Shape* and it is pointing to c11 object of the circle class
    s->draw();        // pointer s  calls draw()

 /*Without virtual → pointer type decides.
   With virtual → actual object being pointed to by the pointer will decides.*/

    return 0;
}    

//WITHOUT VIRTUAL

/*
#include<iostream>
using namespace std;

class Shape {
   public:
   void draw(){
    cout << "Based on the shape " << endl ;
   }
};
class Circle : public Shape {
    public:
    void draw(){
        cout << "Draws Circle ";
    }
};
int main(){
    Shape s1;
    Circle c1;

    Shape* s = &c1;
    s->draw();

    return 0;
} */