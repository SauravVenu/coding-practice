#include <iostream>
using namespace std;

int main(){
    int i;
    string word = "BANANA";
    for(i=0;i<word.length();i++){
    if(word[i]=='A'){
        word[i]='X';
    }
}
    cout << word;
    return 0;
}