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
            if(arr[j]<arr[j+1]){
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
Bubble Sort - Descending Order Summary:

1. Bubble Sort compares adjacent elements.
2. The inner loop uses j to compare:
      arr[j] and arr[j + 1]
3. For descending order, if the left element is smaller
   than the right element, swap them:
      if(arr[j] < arr[j + 1])       this is the only difference , here the smallest element will be moved to right, then again we will sort the elements
      excluding that smallest element and move the second smallest element to the right and we will repeat these steps until the array gets sorted.

      for asending we will use if(arr[j] < arr[j + 1]) and here the largest element is moved to the right then again we will sort the elements
      excluding that largest element and move the second largest element to the right and we will repeat these steps until the array gets sorted.

4. The outer loop uses i to control the passes.
5. After every pass, the smallest unsorted element moves
   toward the end.
6. The inner loop becomes shorter after every pass:
      j < n - 1 - i
7. At most n - 1 passes are required for n elements.
8. Time Complexity:
      O(n²)
9. Space Complexity:
      O(n) because the vector stores n elements.
*/