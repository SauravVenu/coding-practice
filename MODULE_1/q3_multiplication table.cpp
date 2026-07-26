#include <iostream>
using namespace std;
 int main() {

    int  n,i,result;
    
cout << " ENTER THE NUMBER :";
cin >> n ;

for(i=1; i<=10; i++) {
    result=n*i;
    cout<< n <<" * "<< i << " = " << result<< endl;
}
return 0;
 }