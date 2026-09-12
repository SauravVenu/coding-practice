#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,int> student = {101,85};   // DECLARES AND INITIALIZE A PAIR , A PAIR IN C++ IS USED TO STORE EXACTLY TWO RELATED VALUES AS A PAIR 
    cout << "Roll Number : " << student.first << endl; // PRINTING THE FIRST ELEMENT OF THE PAIR
    cout << "Marks : " <<student.second << endl; // PRINTING THE SECOND ELEMENT OF THE PAIR
    cout << endl;

    student.second = 90;   // CHANGING THE SECOND ELEMENT OF THE PAIR FROM 85 TO 90

    cout << "After Update : " << endl;
    cout << "Roll Number : "<<student.first <<endl;  // PRINTING THE FIRST ELEMENT OF THE PAIR
    cout << "Marks : "<<student.second << endl;  // PRINTING THE SECOND ELEMENT OF THE PAIR
    cout << endl;

    auto newPair = make_pair(200,75);  // CREATES NEW PAIR , HERE MAKE_PAIR() WILL CREATES PAIRS AND AUTOMATICALLY IDENTIFIES THE RETURN TYPE OF THE ELEMENTS
    cout << "Second Pair : "<< endl;
    cout << newPair.first << " " << newPair.second;  //PRINTING THE FIRST AND SECOND ELEMENT OF THE NEW PAIR

    return 0;
}