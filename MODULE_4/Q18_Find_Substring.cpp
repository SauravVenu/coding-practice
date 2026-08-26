#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string word;
    string substring;

    cout <<"enter the word : ";
    cin >>word;

    cout << "enter the substring : ";
    cin >>substring;

    for(int i=0;i<word.length();i++){
        word[i]=tolower(word[i]);
    }
    for(int i=0;i<substring.length();i++){
        substring[i]=tolower(substring[i]);
    }
        int index = word.find(substring);//to find the substring in a string we use find()

    if(index!=-1){
        cout <<"Sub string found at index "<<index;
    }else{
        cout << "Sub string not found";
    }        
    return 0;
}