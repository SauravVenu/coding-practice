#include<iostream>
using namespace std;

class person {     //hierarchial inheritance
    public:
    string name;
    void displayName(){
        cout << name << endl;
    }
};
class student : public person{   //hierarchial inheritance
    public:
    string course;
    void study(){
        cout << course << endl;
    }
};
class employee : public person {  //hierarchial inheritance
    public:
    string department;
    void work(){
        cout << department << endl;
    }
};
class intern : public student , public employee { //hybrid inheritance = combination of inheritance. here it is hierarichal and multiple
    public:
    string company;
    void display(){
        cout << company << endl;
    }
};

int main(){
    person p1;// actually this line doesnot have any use in this code
    intern i1;

    p1.name = "saurav";// actually this line doesnot have any use in this code
    i1.course = "c++";
    i1.department = "computer engineering";
    i1.company="google";
                                 
    i1.student::name = "saurav"; // initializing the name accssed by the path
    i1.student::displayName(); // selecting the path since there are two paths . in muti level inheritance this step is not needed since there is only one path
    i1.study();
    i1.work();
    i1.display();

    return 0;
}