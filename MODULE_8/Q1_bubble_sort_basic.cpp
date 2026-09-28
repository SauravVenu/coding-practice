#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "enter the number of elements : ";
    cin >> n;

    vector<int>arr(n);

    cout << "enter the elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    cout << "Sorted Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}


/*
Bubble Sort Summary:

1. Bubble Sort repeatedly compares adjacent elements.
2. If the left element is greater than the right element,
   they are swapped.
3. The inner loop uses j to move through adjacent pairs:
      arr[j] and arr[j + 1]
4. The outer loop uses i to control the number of passes.
5. After every pass, the largest unsorted element moves
   to its correct position at the end.
6. Therefore, the inner loop becomes shorter after each pass:
      j < n - 1 - i
7. For n elements, at most n - 1 passes are required.
8. Ascending order condition:
      arr[j] > arr[j + 1]
9. Time Complexity:
      O(n²)
10. Space Complexity:
      O(n) because the vector stores n elements.
*/
