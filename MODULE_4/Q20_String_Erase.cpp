#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "PROGRAMMING";
    string output = word.erase(3,4);//erase(index,no.of elements) is used to remove characters from an existing string
    cout <<output;
    return 0;
}