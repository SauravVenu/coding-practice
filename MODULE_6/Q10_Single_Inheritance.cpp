#include<iostream>
using namespace std;

class Vehicle {
    public:
    string brand;
    void start(){
        cout << brand << endl;
    }
};
class Car : public Vehicle{
    public:
    string model;
    void drive(){
        cout << model << endl;
    }
~Car(){
    cout << "Thank You";
}
};

int main(){
    Car c1;
    c1.brand = "TOYOTA";
    c1.model = "SUV";

    c1.start();
    c1.drive();
    return 0;
}