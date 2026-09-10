#include<iostream>
using namespace std;

class Employee {
    public:
    void role(){
        cout << "General Employee"<< endl;
    }
};
class Manager : public Employee {
    public:
    void role(){
        cout << "Manages the team"<< endl;
    }
};

int main(){
    Employee e1;
    Manager m1;

    e1.role();
    m1.role();

    return 0;
}