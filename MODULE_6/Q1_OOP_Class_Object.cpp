#include<iostream>
#include<string>
using namespace std;

class Student{             // class
    public:                // access specifier

    string name;           //data members
    int age;

void display(){            //member function
    cout<< name <<" "<<age;
}
};

int main(){

     Student s1;           //object 1
     Student s2;           //object 2

     s1.name = "Saurav";    // assigning values to object 1
     s1.age = 20;

     s2.name = "Rahul";     // assingning values to object 2
     s2.age =21;

    cout << "Student 1 : ";
    s1.display();            // displaying object 1
    
    cout << endl;
    
    cout << "Student 2 : ";  
    s2.display();            //displaying object 2

     return 0;
}