#include<iostream>
using namespace std;

int n,i,j,k;

int main(){

cout<< "  ENTER THE NUMBER OF ROWS : ";
cin>>n;

for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        cout<< " ";
    }
    for(j=1;j<=2*i-1;j++){
    if(j==1 || j==2*i-1 || i==n){
        cout<< "*";
        
    }else{
        cout<< " ";

    }
    
    }cout<< endl;
}
return 0;
}