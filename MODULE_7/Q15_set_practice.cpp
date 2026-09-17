#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int>s;
    s.insert(85);   // inserting elements into the set
    s.insert(72);
    s.insert(90);
    s.insert(85);
    s.insert(60);
    s.insert(72);
    s.insert(95);
    s.insert(90);
    s.insert(78);

    for(int x:s){    // diplying the elements(unique and in a sorted order)
        cout << x << " ";
    }
    cout << endl;

    cout << "the number of unique elements is : "<< s.size() << endl;
    // OR
    /*
    for(int i = 0; i < s.size(); i++){   // FOR FINDING THE COUNT OF UNIQUE ELEMENTS
        count ++;
        cout << "the number of unique elements is : "<< count<< endl;  (if we initially set count = 0)
    }
    */

    if(s.count(90)){   //checks weather 90 exists using count()
        cout << " 90 exists " << endl;
    }else{
        cout <<" 90 doesnt exists "<< endl;
    }

    if(s.find(100)!=s.end()){    //checks weather 100 exists using find()  (it will returns an iterator pointing towards the element)
        cout << "100 exists"<< endl;
    }else{
        cout << "100 doesnt exists"<< endl;
    }

    s.erase(72);  // removes an element 70 from the set

    for(int x : s){
        cout << x << " ";
    }
    return 0;
}


