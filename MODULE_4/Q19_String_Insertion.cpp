#include<iostream>
#include<string>
using namespace std;

int main(){
    string word ="PROGRAMMING";
    string output = word.insert(0,"C++ ");//insert(index,string) is used to insert string or characters into an existing string
    cout << output;
    return 0;
}