#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[6];
    
    cout << "enter 6 elements : ";
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }

    cout << "Original Array : ";
    for(int i =0; i<6;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr+0,arr+6);

    cout << "Sorted array : ";
    for(int x :arr){
        cout << x << " ";
    }
    cout << endl;
    
    int arr2[]={10,5,8,2,7,3};
    cout <<"Second Array : ";
    for(int x :arr2){
        cout << x << " ";
    }
    cout << endl;
    cout << "Controlled sort : ";
    sort(arr2+1,arr2+5);   // sorting elements in the index 1 to 4
    for(int i=0;i<6;i++){
        cout << arr2[i] << " ";
    }
    return 0;
}



/*
====================================================
SUMMARY - SORTING
====================================================

1. sort() is an algorithmic function provided by
   the <algorithm> header file.

2. For a vector:
      sort(v.begin(), v.end());

   This sorts the vector in ascending order.

3. For descending order:
      sort(v.begin(), v.end(), greater<int>());

4. For a normal array:
      sort(arr, arr + n);

   This sorts the entire array.

5. We can sort only a specific range:
      sort(arr + start, arr + end);

   The start position is included, but the end
   position is NOT included.

6. Example:
      sort(arr + 1, arr + 5);

   This sorts indexes 1, 2, 3 and 4.

7. <algorithm> must be included to use sort().

8. sort() can be used with both vectors and arrays.

====================================================
*/
