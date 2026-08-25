#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout << " enter the word : ";
    cin >> word;

    bool isPalindrome = false;

    for(int i = 0; i < word.length()/2;i++){
        if(word[i]==word[word.length()-1-i]){
            isPalindrome = true;
        }else{
            isPalindrome = false;
            break;
        }
        
    }

    if(isPalindrome){
        cout << "the word is palindrome";
    }else{
        cout << " the word is not a palindrome";
    }
  return 0;
}