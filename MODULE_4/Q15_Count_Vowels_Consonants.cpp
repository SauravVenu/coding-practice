#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "COMPUTER";
    int vowels=0;
    int consonents=0;

    for(int i=0;i<word.length();i++){
    if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
        vowels++;
    }else{
        consonents++;
    }
}
    cout<< "Vowels = "<<vowels<<endl;
    cout<< "Consonents = "<<consonents;

    return 0;
}