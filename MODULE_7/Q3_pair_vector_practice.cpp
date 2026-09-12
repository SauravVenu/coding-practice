#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    vector<pair<int,int>>student = { {101,85}, {102,92}, {103,78}};  //pair inside a vector , each vector element will contains a  pair of eleemts,
    for(int i = 0;i<student.size();i++){
        cout << "roll number : " <<student[i].first<< "  "; //first element of the pair for all the index upto the size of the vector
        cout << "marks : " << student[i].second << endl;
    }
    cout << endl;

    cout << "after update : " << endl;

    for(int i=0; i<student.size();i++){
        if(student[i].first == 102){  //changes the mark of the element with roll number 102 from 92 to 95
            student[i].second=95;
        }else{
            continue;
        }
    }

    for(int i =0; i < student.size(); i++){   // prints the updated vector
        cout << "roll number : " <<student[i].first << "  "; 
        cout << "marks : " << student[i].second << endl;
    }
    return 0;
}