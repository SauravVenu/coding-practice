#include <iostream>
using namespace std;

void increaseArray(int arr[], int size){
    for(int i = 0; i < size; i++){
    arr[i]+=10;
    }
    cout << " new array is: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[5],size=5;
    cout << " enter array elements : ";
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
     increaseArray(arr,5);

    return 0;
}
/*main()
  ↓
create array
  ↓
increaseArray(arr, 5)
  ↓
array + size sent to function
  ↓
function accesses arr[i]
  ↓
function processes array
  ↓
result/action happens on the original array*/