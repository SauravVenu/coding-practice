#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;    // declaring an empty vector

    cout << "enter 5 elements : ";
    for(int i = 0; i<5;i++){
        int num;
        cin >> num;     // user enters the elements
        v.push_back(num);  // pushing the elements entered by the user into the vector
    }
    for(int i = 0; i < v.size(); i++){ // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    // removes the last element from the vector

    v.pop_back();
    cout << "after popping the last element : ";
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    //inserting element 100 into index 3 


    v.insert(v.begin()+3,100);
    cout << "after inserting 100 at the third index : ";
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    // erasing an element from the vector at index 1

    v.erase(v.begin()+1);
    cout << "after removing the element at the first index : ";
    for(int i = 0; i < v.size(); i++){  // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    //diplays the size of the current vector

    cout << "size of the vector : "<< v.size() << endl;

    // resize the current vector to size 2
    v.resize(2);
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }

    cout << endl;


    // displays the first element in the vector
    cout << "first element in the vector : " << v.front() << endl;


    //displays the last elemnt in the vector
    cout << "displays the last element in the vector : " << v.back() <<endl;
    return 0;
}