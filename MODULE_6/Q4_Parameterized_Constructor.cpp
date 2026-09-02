#include<iostream>
#include<string>
using namespace std;

class Student{
   public:
     string name;
     int age;

     Student(string n,int a){
        name= n;
        age = a;
     }

     void display(){
        cout << name << " " << age << endl;
     }
};


int main(){
    string name;
    int age;

    cout <<"Enter student details : " <<endl;
    cin >> name;

    cout << "enter the age : " <<endl;
    cin >> age;

    Student s1(name,age);
    Student s2("Rahul",17);

    s1.display();
    s2.display();

  return 0;
}