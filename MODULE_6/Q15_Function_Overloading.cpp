#include<iostream>
using namespace std;

class calculate {
    public:
    int add(int a , int b){
        return a+b;
    }
    int add(int a, int b , int c){
        return a+b+c;
    }
    double add(double (a) , double (b)){
        return a+b;
    }
};

int main(){
    int a =3;
    int b = 5;
    int c = 20;
    
    calculate cal;

    int result_of_two_numbers = cal.add(a,b);
    int result_of_three_numbers = cal.add(a,b,c);

    cout << cal.add(2.5,3.5)<< endl;
    cout << result_of_two_numbers << endl;
    cout << result_of_three_numbers << endl;
    return 0;
}