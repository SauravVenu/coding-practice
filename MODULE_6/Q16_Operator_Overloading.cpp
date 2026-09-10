#include<iostream>
using namespace std;

class Number {                                             
    public:
    int value;

    Number (int value){
        this->value =  value;
    }
    Number operator*(Number n){
        Number result(0);
        result.value = value * n.value;
        return result;
    }
};

int main(){
    Number n1(10);
    Number n2(20);
    Number n3(0);

    n3 = n1 *(n2);

    cout << n3.value;
    return 0;
} 

//WORK FLOW

/*n1.value = 10
n2.value = 20
n3.value = 0

        n3 = n1 * n2
               ↓
        operator*(n2)
               ↓
     value * n.value
       10   *   20
               ↓
      result.value = 200
               ↓
          return result
               ↓
       n3 = returned result
               ↓
        n3.value = 200
               ↓
       cout << n3.value
               ↓
              200*/