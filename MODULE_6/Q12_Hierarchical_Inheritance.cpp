#include<iostream>
using namespace std;
class Employee {       //Hierarchial Inheritance
    public:
    string name;
    void displayName(){
        cout << name << endl;
    }
};

class Manager : public Employee {
    public:
    string department;
    void manages(){
        cout << name << " " << department << endl;
    }

Manager(string name ,string department){
    this->name= name;
    this->department = department;
}
~Manager(){
    cout << "My department is "<< department << endl;
}
};

class Developer : public Employee {
    public:
    string language;
    void code(){
        cout << name << " "<< language << endl;
    }

Developer(string name ,string language){
    this->name = name;
    this->language = language;
}
~Developer(){
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
    cin >> language;

    
    Manager m1(name,department);
    Developer d1(name,language);

    m1.displayName();
    d1.displayName();
    m1.manages();
    d1.code();

    return 0;
}