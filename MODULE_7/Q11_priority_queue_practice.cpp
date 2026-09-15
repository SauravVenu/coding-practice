#include<iostream>
#include<queue>  // header file to use priority queue
using namespace std;

int  main(){
    priority_queue<int>pq;   // declaring a priority queue

    pq.push(40);   // pushing elements into the queue , a priority queue by default is a max heap , so it will internally process the elements and dispaly the element with highest value first whwn we call top()
    pq.push(10);
    pq.push(70);
    pq.push(30);
    pq.push(90);

    while(!pq.empty()){
       cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    cout << " the queue is now empty";
    return 0;
}