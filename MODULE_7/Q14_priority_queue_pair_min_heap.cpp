#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

    pq.push({4,201});
    pq.push({8,202});
    pq.push({3,203});
    pq.push({8,204});
    pq.push({6,205});
    pq.push({2,206});

    int remaining_task = pq.size();
    cout << "remaianing no. of tasks is "<< remaining_task << endl;

    while(!pq.empty()){

        cout <<"ID = "<< pq.top().second << " " << "Priority = "<< pq.top().first << endl;
        pq.pop();

        remaining_task = pq.size();
        cout << "remaianing no. of tasks is " << remaining_task << endl;
        
    }
    cout << "queue is now empty";

    return 0;
}
