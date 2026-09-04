#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    void myName(){
        cout << name <<endl;
    }
};
class Employee : public Person {
    public:
    string dept;
    void myDept(){
        cout << dept << endl;
    }
};
class Manager : public Employee{
    public:
    string work;
    void myWork(){
        cout << work << endl;
    }
Manager(string name, string dept,string work){
   this->name = name;
   this->dept = dept;
   this->work = work;
}
~Manager(){
    cout << "Thank You";
}
};

int main(){
    string name,dept,work;
    cout << "Name ";
    getline(cin,name);

    cout << "Dept ";
    getline(cin,dept);

    cout << "Work ";
    getline(cin,work);

    Manager m1(name,dept,work);
   
    m1.myName();
    m1.myDept();
    m1.myWork();

    return 0;
}