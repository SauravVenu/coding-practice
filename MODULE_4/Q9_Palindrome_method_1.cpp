#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout << " enter the word : ";
    cin >> word;

    int left = 0;
    int right = word.length()-1;
    bool isPalindrome = false;

    for(int i = 0; i < word.length()/2;i++){
        if(word[left]==word[right]){
            left++;
            right--;
        }else{
            break;
        }
        
    }
    if(word[left]==word[right]){
        isPalindrome = true;
    }

    if(isPalindrome){
        cout << "the word is palindrome";
    }else{
        cout << " the word is not a palindrome";
    }
  return 0;
}