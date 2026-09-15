#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int main(){
    priority_queue<pair<int,int>>pq;

    pq.push({3,101});
    pq.push({7,102});
    pq.push({5,103});
    pq.push({7,104});
    pq.push({2,105});

    while(!pq.empty()){
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    cout << endl;
    cout << "queue is now empty";
    return 0;
}



