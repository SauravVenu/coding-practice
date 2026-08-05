#include <iostream>
using namespace  std;

int add (int a,int b){
    return a+b;
}

int main(){

    int answer = add(10,2);
    cout << "The Answer is :"<< answer << endl;

    return 0;
}