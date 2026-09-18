#include<iostream>
#include<unordered_set>   // header file used to include unordered set
using namespace std;

int main(){
    unordered_set<int>us;  // declaring unordered set (UNORDERED SET = UNIQUE + UNSORTED)

    us.insert(101);   // insert() used to insert values into the un ordered set
    us.insert(105);
    us.insert(102);
    us.insert(101);
    us.insert(108);
    us.insert(105);
    us.insert(110);
    us.insert(102);
    us.insert(115);
    
    cout << "initial set : ";
    for(int x : us){    // displaying unique IDs (unordered set will store only unique IDs)
        cout << x << " ";
    }
    cout << endl;

    cout << "unique user is's : " << us.size() << endl;   // displaying the size of teh unordered set

    if(us.find(108)!=us.end()){   // checking wheather an element exist using find()
        cout << "108 exists";
    }else{
        cout << " 108 doesnt exist";
    }
    cout << endl;

    if(us.count(120)){     // checking wheather an element exist using count(). count will returns either 1 or 0
        cout << "120 exists";
    }else{
        cout << "120 doesnt exists";
    }
    cout << endl;

    us.erase(105);    // it will removes an element , here it is 120
    
    cout << "updated set : ";
    for(int x : us){
        cout << x << " ";
    }
    cout << endl;

    us.clear();   // clear() will clear all the elements from the set

    if(us.empty()){    // empty() will check wheather the set is empty or not
        cout << "empty";
    }else{
        cout << "not empty";
    }
    cout << endl;

    return 0;
}