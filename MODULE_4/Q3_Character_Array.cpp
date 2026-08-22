#include<iostream>
using namespace std;

int main(){
char word[]="WORLD";

cout << word[0] << endl;
cout << word[4] << endl;

for(int i=0;i<6;i++){
    cout << word[i] <<" ";
}
return 0;
}
