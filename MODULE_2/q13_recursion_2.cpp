#include <iostream>
using namespace std;

int n,ans;

int print(int n){

    if(n==0){
        return 0;
    }
    return n + print(n-1);
}

int main(){

    int ans = print(5);
    cout << " Sum is " << ans;
    return 0;

}