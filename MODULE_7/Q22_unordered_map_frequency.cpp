#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int key,value;

    unordered_map<int,int>frequency;
    cout << "enter the numbers : ";
    for(int i=0;i<8;i++){
        cin >> key;
        frequency[key]++;    // increasing the frequency of key by 1 , if its entered twice the frequenxy of that particular number will be 2 , by default the value will be 0
    }

    for (auto x : frequency){
        cout << x.first << " " << x.second<< endl;
    }
    cout << endl;

    if(frequency.find(5)!=frequency.end()){
        cout << "5 exists" << endl;
    }else{
        cout << "5 doesnot exist" << endl;
    }

    cout << frequency.size();

    return 0;
}
