#include<iostream>
using namespace std;

class Student {   //Multple inheritance , that is multiple parents , one child
   public:
   string name;
   void displayName(){
    cout << name << endl;
   }
};
class Marks {
   public:
   int marks;
   void displayMarks(){
    cout << marks << endl;
   }
};
class Result : public Student, public Marks {
    public:
    void displayResult(){
        cout << "Name : " << name << endl;
        cout << "Marks : "<< marks << endl;
    }

    Result(){
        name = "Saurav Venu";
        marks = 100;
    }
    ~Result(){
        if(marks==100){
        cout << "Excellent";
    }else{
        cout << "Very Good";
    }
}
};


int main(){
    Result r1;
    r1.displayName();
    r1.displayMarks();

    r1.displayResult();
    return 0;
}