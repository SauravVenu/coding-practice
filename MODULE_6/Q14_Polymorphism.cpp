#include<iostream>
using namespace std;

class Animal {
    public:
    void sound(){
        cout <<"depends on the animal"<< endl;
    }
};
class Dog {
    public:
    void sound(){
        cout <<"bark"<< endl;
    }
};

int main(){
    Animal a;
    Dog d;

    a.sound();
    d.sound();
    return 0;
}