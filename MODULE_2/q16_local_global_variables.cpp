#include <iostream>
using namespace std;

int count = 10;

void change(){
    
   count = 50;
}

int main(){
    change();
    cout << count << endl;
    return 0;

}