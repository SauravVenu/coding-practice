#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "COMPUTER";
    bool isFound = false;
    
    for(int i=0;i<word.length();i++){
        if(word[i]=='P'){
            isFound=true;
            break;
        }
    }
    if(isFound){
    cout << "Character found";
    }else{
    cout << "Character not found";
    }
    return 0;
}