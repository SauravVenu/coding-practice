#include<iostream>
using namespace std;

class Student {
   public:
   string name;
   int age;

   Student(){
    name = "Saurav";
    age = 20;
   }
   
   void display(){
    cout << name << " " << age ;
   }
};

int main(){
    Student s1;
    s1.display();
    return 0;
}