#include<iostream>
using namespace std;

int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int min(int x, int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int main(){

    int x = 30;
    int y = 25;

    cout << " Maximum : "<< max(x,y) << endl;
    cout << " Minimum : "<< min(x,y) << endl;
    

    return 0;
}