#include<iostream>
#include<string>
using namespace std;

int  main(){
    string word1;
    string word2;

    cout <<"enter the first word : ";
    cin >> word1;

    cout << "enter the second wrod : ";
    cin >> word2;

    if(word1==word2){
        cout << "same words" << endl;
    }else{
        cout <<"different words";
    }

    return 0;

}