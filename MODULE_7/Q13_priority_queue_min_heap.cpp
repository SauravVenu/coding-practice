#include<iostream>
#include<queue>
using namespace std;

int main(){
    int count=0;
    priority_queue<int,vector<int>,greater<int>>pq;

    pq.push(45);
    pq.push(12);
    pq.push(67);
    pq.push(23);
    pq.push(8);
    pq.push(34);

    while(!pq.empty()){
        cout <<pq.top() << endl;
        pq.pop();
        count ++;
    }
    cout <<"no. of processed task is "<< count<< endl;
    cout << "queue is now empty";
    return 0;
}