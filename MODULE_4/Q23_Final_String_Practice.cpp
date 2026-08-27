#include<iostream>
#include<string>
using namespace std;

int main(){
    string word ="radar";
    cout<<"Original : "<<word <<endl;

    int length = word.length();
    cout<<"Length : "<<length <<endl;

    cout<<"reverse : ";
    for(int i = word.length()-1;i>=0;i--){
       cout<<word[i]; 
    }
    cout << endl;

    bool isPalindrome=true;
    for(int i=0;i<word.length()/2;i++){
    if(word[i]!=word[word.length()-1-i]){
        isPalindrome = false;
        break;
    }
}
    cout <<"Palindrome : ";
    if(isPalindrome){
        cout << "Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    int vowels=0;
    for(int i=0;i<word.length();i++){
        word[i]=toupper(word[i]);
        if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
            vowels++;
        }
    }
    cout << "Vowels : "<<vowels<<endl;

    cout <<"UPPERCASE : ";
    for(int i=0;i<word.length();i++){
        word[i]=toupper(word[i]);
        cout << word[i];
    }
    return 0;
}