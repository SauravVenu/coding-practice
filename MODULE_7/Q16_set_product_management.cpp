#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(105);
    s.insert(102);
    s.insert(108);
    s.insert(105);
    s.insert(110);
    s.insert(102);
    s.insert(115);
    s.insert(108);
    s.insert(120);

    cout << "unique and sorted id's : " ;
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    cout << "number of unique product id's are "<<s.size() << endl;

    if(s.find(102) != s.end()){
        cout << "ID exist";
    }else{
        cout << "ID doesnt exist";
    }
    cout << endl;

    s.erase(105);

    cout << "updated set : ";
    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    s.clear();

    if(s.empty()){
        cout << "the set is empty";
    }else{
        cout << "the set is not empty";
    }

    return 0;
}
