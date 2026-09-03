#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    Student(string name,int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout << name << " " << age;
        cout << endl;
    }
};

int main(){
    Student s1("Saurav",20);
    Student s2("Rahul",17);

    s1.display();
    s2.display();
    
    return 0;
}