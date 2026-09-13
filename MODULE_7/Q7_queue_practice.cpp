#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;   // declaring the queue 
    q.push(10);    // pushing the queue elements to the back of the queue
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front : " << q.front() << endl;    //printing the element at the front
    cout << "Back : "  << q.back() << endl;     //printing the element at the back
    cout << "Size : "  << q.size() << endl;     //printing the size of the queue that is the number of elements in the queue

    q.pop();       // removing the elemnts from the front of teh queue
    q.pop();

    cout << "After emoving elements : " << endl;

    cout << "Front : " << q.front() << endl;    //printing the first element afetr popping
    cout << "Back : "  << q.back() << endl;     //printing the ast element after popping
    cout << "Size : "  << q.size() << endl;     //printing the size of the queue that is the number of elements in the queue after ppopping

    if(q.empty()){    // checking weather the queue is empty
        cout << "queue is empty ";
    }else{
        cout << "queue is not empty ";
    }
    return 0;
}
