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
        int minIndex = i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout << "after sorting : ";
    for(int  x : arr){
        cout << x << " ";
    }
    return 0;
}


/*
============================================================
              SELECTION SORT - ASCENDING
============================================================

GOAL:
-----
Arrange the elements from SMALLEST to LARGEST.

Example:

Input:
    7 4 9 2 5

Output:
    2 4 5 7 9


============================================================
                 MAIN IDEA
============================================================

Selection Sort works by:

1. Select the position we are currently working on.
2. Search the remaining unsorted elements.
3. Find the SMALLEST element.
4. Remember its index using minIndex.
5. Swap the smallest element with the current position.
6. Move to the next position.


============================================================
              ROLE OF EACH VARIABLE
============================================================

i:
--
'i' represents the position where the smallest element
SHOULD GO.

IMPORTANT:

    arr[i] is NOT necessarily the smallest element.

It is simply the current position that we are trying
to fill correctly.


j:
--
'j' is the SEARCHING variable.

It checks every remaining element in the unsorted portion.

It starts from:

    j = i + 1


minIndex:
---------
minIndex stores the INDEX of the smallest element found
SO FAR during the current pass.

At the beginning of every pass:

    minIndex = i;

This means:

"Initially, assume arr[i] is the smallest."

Then we search for something smaller.


============================================================
             IMPORTANT DOUBT: minIndex++
============================================================

DO NOT use:

    minIndex++;

minIndex should NOT simply move forward.

It must be reset at the beginning of EVERY pass:

    minIndex = i;

Example:

    Pass 1:
        i = 0
        minIndex = 0

    Pass 2:
        i = 1
        minIndex = 1

    Pass 3:
        i = 2
        minIndex = 2

The reason is that every pass is a NEW search.

After setting minIndex = i, the inner loop decides whether
minIndex should change.


============================================================
          HOW minIndex CHANGES
============================================================

The condition is:

    if(arr[j] < arr[minIndex])

If TRUE:

    minIndex = j;

This means:

"We found an element smaller than our current minimum."

If FALSE:

    minIndex does not change.


Therefore:

    j        -> keeps moving and checking
    minIndex -> changes only when a smaller element is found


============================================================
              i vs j vs minIndex
============================================================

Remember:

    i
    ↓
    Where should the minimum GO?


    j
    ↓
    Which element am I checking RIGHT NOW?


    minIndex
    ↓
    Where is the smallest element found SO FAR?


Simple memory trick:

    i        = DESTINATION
    j        = SEARCHER
    minIndex = MINIMUM'S LOCATION


============================================================
              WHY NOT swap(arr[i], arr[j])?
============================================================

We do:

    swap(arr[i], arr[minIndex]);

NOT:

    swap(arr[i], arr[j]);

Why?

Because j is only the CURRENT searching position.

After the inner loop finishes, j has moved through the
remaining elements.

minIndex remembers where the actual smallest element is.

Example:

    [7, 4, 9, 2, 5]

During the search:

    j = 1 -> 4
    j = 2 -> 9
    j = 3 -> 2
    j = 4 -> 5

The smallest element is 2 at index 3.

Therefore:

    minIndex = 3

So we do:

    swap(arr[0], arr[3]);


============================================================
              COMPLETE WORKFLOW
============================================================

Sample:

    [7, 4, 9, 2, 5]


---------------- PASS 1 ----------------

i = 0

Initially:

    minIndex = 0

Array:

    [7, 4, 9, 2, 5]
     ↑
     i
     minIndex


Search:

    j = 1:
        4 < 7 -> TRUE
        minIndex = 1

    j = 2:
        9 < 4 -> FALSE
        minIndex remains 1

    j = 3:
        2 < 4 -> TRUE
        minIndex = 3

    j = 4:
        5 < 2 -> FALSE
        minIndex remains 3


Smallest element = 2
Its index = 3

Swap:

    swap(arr[0], arr[3])

Array becomes:

    [2, 4, 9, 7, 5]

Index 0 is now sorted.


---------------- PASS 2 ----------------

i = 1

Reset:

    minIndex = 1

Search from j = 2:

    9 < 4 -> FALSE
    7 < 4 -> FALSE
    5 < 4 -> FALSE

minIndex remains 1.

Swap:

    swap(arr[1], arr[1])

Array remains:

    [2, 4, 9, 7, 5]

Indexes 0 and 1 are now sorted.


---------------- PASS 3 ----------------

i = 2

Initially:

    minIndex = 2

Search:

    j = 3:
        7 < 9 -> TRUE
        minIndex = 3

    j = 4:
        5 < 7 -> TRUE
        minIndex = 4

Smallest element = 5
Index = 4

Swap:

    swap(arr[2], arr[4])

Array:

    [2, 4, 5, 7, 9]


---------------- PASS 4 ----------------

i = 3

Initially:

    minIndex = 3

Search:

    j = 4:
        9 < 7 -> FALSE

minIndex remains 3.

Swap:

    swap(arr[3], arr[3])

Final:

    [2, 4, 5, 7, 9]


============================================================
             ASCENDING CORE CODE
============================================================

    for(int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }


============================================================
                 KEY TAKEAWAY
============================================================

ASCENDING SELECTION SORT:

    Find the SMALLEST
          ↓
    Remember its index
          ↓
    Swap it with arr[i]
          ↓
    Move i forward
          ↓
    Repeat

Most important line:

    minIndex = i;

Most important comparison:

    arr[j] < arr[minIndex]

Final swap:

    swap(arr[i], arr[minIndex])


TIME COMPLEXITY:
----------------

Best Case    -> O(n²)
Average Case -> O(n²)
Worst Case   -> O(n²)

SPACE COMPLEXITY:

    O(1)

Selection Sort works IN-PLACE.
============================================================
*/