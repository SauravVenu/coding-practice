#include<iostream>
#include<string>
using namespace std;

int main(){
    string word = "PYTHON";
    cout<< "Orginal : ";
    for(int i =0;i<word.length();i++){
        cout << word[i];
    }
    cout << endl;

    cout << "Reversed : ";
    for(int i = word.length()-1;i>=0;i--){
        cout << word[i];
    }

    return 0;

}