#include<iostream>
using namespace std;

class Student {
    public:
    Student(){    // constructor . it gets executed when the object gets created
        cout << "Student object created"<< endl;
    }
    ~Student(){   // destructor . it gets executed when the object gets destroyed
        cout << "Student object destroyed" << endl;
    }
};

int main(){
    Student s1;
    Student s2;
    return 0;
}