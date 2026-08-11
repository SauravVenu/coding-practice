#include <iostream>
using namespace std;

int main(){

    int arr[5],search,i;
    bool found = false;

     cout << "Enter five elements : ";
     for(i=0;i<5;i++){
        cin  >> arr[i];
        cout<< " ";
     }

    cout<< "Enter the search element : ";
    cin >> search;

    for(i=0;i<5;i++){
        if(arr[i]==search){
            found=true;
            break;
        }
    }
    if(found==true){
        cout << "Found at index " << i << endl;
    }else{
        cout << " Not found " << endl;
    }
    return 0;
}