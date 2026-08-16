#include<iostream>
using namespace std;

int main(){
    int arr[8];
    cout << " enter the numbers : ";
    for(int i=0;i<8;i++){
        cin >> arr[i];
    }
    // for loop for selecting an element
    for(int i=0;i<8;i++){
      int count=0;
        bool isChecked = false;
    // for loop for checking whether the element ahs been processed or compared before
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                isChecked=true;
                break;
            }
        }
        if(isChecked)
        continue;

        
    // for loop for checking how many times an element has occured
        for(int j=0;j<8;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    // We can also use for(j = i + 1; j < 8; j++) and if(count > 0) 
        if(count>1){
            
            cout << arr[i] << " ";

            }
        }
       return 0;
    }
   

