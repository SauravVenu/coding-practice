#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "COMPUTER";
    cout << "original string : " << word << endl;

    word[2]='X';

    cout <<"new string : " << word << endl;
    return 0;


}