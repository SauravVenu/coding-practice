#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string word;
   cout << "enter the word : ";
   cin >> word;

   for(int i=0;i<word.length();i++){
    word[i] = toupper(word[i]);
    /* the tolower and toupper functions will work character by character 
    therefore we added a for loop to access each character and assinging each upper case character to string and finally
    printing it outside the for loop*/
   }
  cout << word;
   return 0;
}