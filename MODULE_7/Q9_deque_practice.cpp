#include<iostream>
#include<deque>     // header file used to include deque
using namespace std;

int main(){
    deque<int>d;       // declaring a deque

    d.push_back(10);   // adding elements at the back of deque
    d.push_back(20);

    d.push_front(5);   // adding elements at the front of deque
    d.push_front(1);

    cout << "at the beginning " << endl;

    for(int i = 0; i<d.size();i++){
        cout << d[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "front : "<<d.front() << endl;   //prints the element at the front
    cout << "back : "<< d.back() << endl;   //prints the element at the back
    cout << "size : "<< d.size() << endl;    //prints the size of the element

    d.pop_back();   // removes th element at the back
    d.pop_front();  //removes th element at the front

    cout << "after removing elements : " << endl;
     for(int i = 0; i<d.size();i++){
        cout << d[i] << " ";
    }

    cout << endl;
    cout << endl;

    cout << "front : "<<d.front() << endl;   //prints the element at the front
    cout << "back : "<< d.back() << endl;   //prints the element at the back
    cout << "size : "<< d.size() << endl;    //prints the size of the element

    return 0;
}