#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string>v;
    string str;

    cout << " enter 6 strings : ";
    for(int i=0;i<6;i++){
        cin >> str;
        v.push_back(str);
    }

    cout << "entered strings : ";
    for(string x : v){
        cout << x <<" ";
    }
    cout << endl;

    sort(v.begin(),v.end());
    
    cout << "sorted alphabetically : ";
    for(string x : v){
        cout << x <<" ";
    }
    cout << endl;
  
    sort(v.begin(),v.end(),greater<string>());
    
    cout << " sortes reverse alphabetically : ";
    for(string x : v){
        cout << x <<" ";
    }
    cout << endl;

    return 0;
}