#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the number of elements : ";
    cin >> n;

    vector<int>arr(n);

    cout <<"enter the elements : ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }

    for(int i=0;i<arr.size()-1;i++){
        int maxIndex = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex=j;
            }
        }
        swap(arr[i],arr[maxIndex]);
    }
    cout << "after sorting : ";
    for(int  x : arr){
        cout << x << " ";
    }
    return 0;
}