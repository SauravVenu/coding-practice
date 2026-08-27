#include<iostream>
#include<string>
using namespace std;
int main(){
    string word ="PROGRAMMING";
    string output = word.substr(3,4);//substr(starting index,no.of charcters) is used to extract a particular substring from the existing string.
    cout << output;
    return 0;
}