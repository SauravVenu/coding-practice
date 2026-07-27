#include <iostream>
 using namespace std;

 int n;
int main(){
 cout << " ENTER THE NUMBER OF ROWS : ";
 cin >> n;

    for(int i=n;i>=1;i--){
        for(int k=n-1;k>=i;k--){
            cout<< " ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<< "*";
        }
        cout<<endl;
}
 return 0;
}