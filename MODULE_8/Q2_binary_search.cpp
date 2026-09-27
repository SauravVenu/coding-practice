#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,target,i;
    cout << "enter the numebr of elements : ";
    cin >> n;

    vector<int>arr(n);
    cout <<"enter the elements : ";
    for( i = 0; i<n;i++){
        cin >>arr[i];
    }

    cout <<"enter the search element : ";
    cin >> target;

    int index = -1;
    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid = low +(high-low)/2;

        if(arr[mid]==target){
            cout << "element found at ";
            index=mid;
            break;
        }else if(target>arr[mid]){
            low = mid+1;
        }else if(target<arr[mid]){
            high = mid -1;
        }
    }
    cout << "index : "<< index;
    return 0;
} 









/*
========================================================
TOPIC: BINARY SEARCH
FILE: Q2_binary_search.cpp
========================================================

1. WHAT IS BINARY SEARCH?
-------------------------
Binary Search is a searching algorithm used to find an element
in a SORTED array/vector.

Instead of checking every element one by one, it repeatedly
divides the search range into half.

IMPORTANT:
The array/vector must be sorted for Binary Search to work
correctly.

--------------------------------------------------------

2. MAIN VARIABLES
-----------------
low  -> starting index of the current search range
high -> ending index of the current search range
mid  -> middle index of the current search range

Initial values:

low = 0
high = n - 1

Middle:

mid = low + (high - low) / 2

--------------------------------------------------------

3. BINARY SEARCH LOGIC
----------------------

while (low <= high)

    Calculate mid.

    If:
        arr[mid] == target
    → Target found.

    Else if:
        target > arr[mid]
    → Target must be on the right side.
    → low = mid + 1

    Else if:
        target < arr[mid]
    → Target must be on the left side.
    → high = mid - 1

--------------------------------------------------------

4. WHY DOES MID NEED TO BE INSIDE THE LOOP?
--------------------------------------------

low and high can change after every comparison.

When low or high changes, the current search range changes.

Therefore, the middle position also changes.

So mid must be recalculated in every iteration.

Example:

low = 0, high = 6
mid = 3

If target is greater than arr[mid]:

low = mid + 1

Now:

low = 4, high = 6

The new mid must be calculated again.

--------------------------------------------------------

5. WHY ARE LOW AND HIGH OUTSIDE THE LOOP?
------------------------------------------

low and high represent the current search boundaries.

They must preserve their updated values between iterations.

If they were initialized inside the loop, they would be reset
every iteration and Binary Search would not work correctly.

--------------------------------------------------------

6. HANDLING "ELEMENT NOT FOUND"
--------------------------------

index is initially:

index = -1

If the target is found:

index = mid

If the target is never found, the while loop eventually ends
when:

low > high

Since index was never changed, it remains:

index = -1

Therefore, -1 represents "not found".

--------------------------------------------------------

7. WHY DO WE USE BREAK?
-----------------------

Once:

arr[mid] == target

the target has been found.

There is no reason to continue searching.

Therefore:

index = mid;
break;

--------------------------------------------------------

8. WORKFLOW
-----------

Sorted array:

[10, 20, 30, 40, 50, 60, 70]

Target = 60

Step 1:
low = 0
high = 6
mid = 3

arr[mid] = 40

60 > 40

Search right half.

low = mid + 1
low = 4

Step 2:
low = 4
high = 6
mid = 5

arr[mid] = 60

60 == 60

Target found.

index = 5

break

--------------------------------------------------------

9. IMPORTANT DIFFERENCE FROM LINEAR SEARCH
--------------------------------------------

Linear Search:
Checks elements one by one.

Binary Search:
Eliminates approximately half of the search space after
each comparison.

Therefore:

Linear Search → O(n)
Binary Search → O(log n)

--------------------------------------------------------

10. TIME COMPLEXITY
-------------------

Best Case:
O(1)

The target may be found at the first middle-element check.

Average Case:
O(log n)

Worst Case:
O(log n)

Therefore, the standard time complexity of iterative
Binary Search is:

O(log n)

--------------------------------------------------------

11. SPACE COMPLEXITY
--------------------

For the Binary Search algorithm itself:

Auxiliary Space = O(1)

Only a few variables such as:

low
high
mid
index

are used.

However, the complete program stores n elements in:

vector<int> arr(n);

Therefore:

Total Space = O(n)
Auxiliary Space = O(1)

--------------------------------------------------------

12. IMPORTANT PLACEMENT POINTS
-------------------------------

✓ Binary Search requires sorted data.
✓ Use low and high to represent the current search range.
✓ Calculate mid from the current low and high.
✓ target > arr[mid] → search right → low = mid + 1
✓ target < arr[mid] → search left → high = mid - 1
✓ target == arr[mid] → found
✓ Use break after finding the target.
✓ -1 can represent "not found".
✓ Iterative Binary Search has O(log n) time.
✓ Iterative Binary Search has O(1) auxiliary space.

========================================================
END OF BINARY SEARCH SUMMARY
========================================================
*/