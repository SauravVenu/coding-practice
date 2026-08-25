#include<iostream>
#include<string>
using namespace std;

int main(){
    int count=0;
    string word ="BANANA";

    for(int i=0;i<word.length();i++){
        if(word[i]=='A'){
            count++;
        }else{
            continue;
        }
    }
    cout << "A appears "<< count <<" times";
    return 0;
}