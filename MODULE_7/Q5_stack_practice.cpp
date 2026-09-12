#include<iostream>
#include<stack>  // header file used to include stack
using namespace std;

int main(){
    stack<int>s;
    s.push(10);    //pushes th element to the top of the stack
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top : " << s.top() << endl;    //prints the top element of the stack 
    cout << "Size : " << s.size() << endl;    //prints the size of the stack , that is number of elements in the stack
    cout << endl;

    s.pop();

    cout << "After Pop : " << endl;
    cout << "Top : "<< s.top() << endl;
    cout << "Size : "<< s.size() << endl;

    if(s.empty()){    // checks weather the stack is empty, it will returns 1 if it is empty and 0 if it is not empty
        cout << "the stack is empty";
    }else{
        cout << "the stack is not empty";
    }

    return 0;
}