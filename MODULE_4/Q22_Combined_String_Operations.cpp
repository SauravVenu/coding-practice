#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "PROGRAMMING";

    string afterInsertion = word.insert(0,"C++ ");// for insertion
    string afterDeletion = afterInsertion.erase(10,1); // for deletion
    string output = afterDeletion.substr(0,6);// for extracting the substring

    cout << output;
    return 0;
}