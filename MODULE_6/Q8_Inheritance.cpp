#include<iostream>
#include<string>
using namespace std;

class Employee {
    public :

    string name;

    void work(){
        cout << "name : " << name << endl;
    }
};

    class Manager : public Employee {
        public :

        string dept;

        void manage(){
        cout << "manages : "<< dept;
        }
};


int main(){
    Manager m1;

    m1.name = "Saurav";
    m1.dept = "AIML";

    m1.work();
    m1.manage();
    return 0;
}