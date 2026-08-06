#include <iostream>
using namespace std;

int num = 100;

void first (){
    cout << num << endl;
}
void second() {
    int num = 200;
    cout<< num << endl;
}


int main(){

    first();
    second();
cout<< num << endl;
    return 0;
}