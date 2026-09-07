#include<iostream>
using namespace std;
class Employee {       //Hierarchial Inheritance
    public:
    string name;
    void displayName(){
        cout << name << endl;
    }
};

class Manager : public Employee {  //Manager inherits employee class
    public:
    string department;
    void manages(){
        cout << name << " " << department << endl;
    }

Manager(string name ,string department){  // constructor for manager object
    this->name= name;
    this->department = department;
}
~Manager(){    // destructor for manager object
    cout << "My department is "<< department << endl;
}
};

class Developer : public Employee {    // developer class inherits employee class
    public:
    string language;
    void code(){
        cout << name << " "<< language << endl;
    }

Developer(string name ,string language){  // constructor for developer object
    this->name = name;
    this->language = language;
}
~Developer(){      //destructor for developer object
    cout << "C++ developer" << endl;
}
};

int main(){
    string name, department, language;

    cout << "name : ";
    getline(cin,name);

    cout << "department : ";
    getline(cin,department);

    cout << "language : ";
    getline(cin,language);

    
    Manager m1(name,department);    // manager objects gets created
    Developer d1(name,language);    // developer object gets created

    m1.displayName();
    d1.displayName();
    m1.manages();
    d1.code();

    return 0;
}