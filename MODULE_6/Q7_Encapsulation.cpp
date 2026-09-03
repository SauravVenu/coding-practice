#include<iostream>
#include<string>
using namespace std;

class Student {
    private :
    string name;
    int age;

    public: 
    void setName(string name){
        this->name=name;
    }
    string getName(){
       return name; 
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
        }
};

int main(){
    string name;
    int age;

    cout << "enter the name : ";
    cin >> name;

    cout << "enter the age : ";
    cin >> age;

    Student s1;
    s1.setName(name);
    s1.setAge(age);

    cout << s1.getName() << endl;
    cout << s1.getAge() << endl;

    return 0;
}