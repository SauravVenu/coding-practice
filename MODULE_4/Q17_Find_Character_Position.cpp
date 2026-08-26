#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    int i;    
    char ch;
    cout << "enter the word: ";
    cin >>word;

    cout << "enter the search character : ";
    cin >> ch;

    bool isFound=false;

    for(i=0;i<word.length();i++){
        word[i]=tolower(word[i]);
        ch = tolower(ch);
        if(word[i]==ch){
           isFound =true;
           break;
        }else{
            continue;
        }
    }
    if(isFound){
         cout << "charcter found at index "<< i << endl;
    }else{
        cout << "character not found";
    }
    return 0;
}