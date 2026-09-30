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


/*
============================================================
              SELECTION SORT - DESCENDING
============================================================

GOAL:
-----
Arrange the elements from LARGEST to SMALLEST.

Example:

Input:
    10 4 7 2 15 8

Output:
    15 10 8 7 4 2


============================================================
                 MAIN IDEA
============================================================

Selection Sort works by:

1. Select the position we are currently working on.
2. Search the remaining unsorted elements.
3. Find the LARGEST element.
4. Remember its index using maxIndex.
5. Swap the largest element with the current position.
6. Move to the next position.


============================================================
              ROLE OF EACH VARIABLE
============================================================

i:
--
'i' represents the position where the largest element
SHOULD GO.

IMPORTANT:

    arr[i] is NOT necessarily the largest element.

It is simply the current position that we are trying
to fill correctly.


j:
--
'j' is the SEARCHING variable.

It checks every remaining element in the unsorted portion.

It starts from:

    j = i + 1


maxIndex:
---------
maxIndex stores the INDEX of the largest element found
SO FAR during the current pass.

At the beginning of every pass:

    maxIndex = i;

This means:

"Initially, assume arr[i] is the largest."

Then we search for something larger.


============================================================
              IMPORTANT CONCEPT
============================================================

DO NOT use:

    maxIndex++;

maxIndex should NOT simply move forward.

It must be reset at the beginning of EVERY pass:

    maxIndex = i;

Example:

    Pass 1:
        i = 0
        maxIndex = 0

    Pass 2:
        i = 1
        maxIndex = 1

    Pass 3:
        i = 2
        maxIndex = 2

Every pass is a NEW search.


============================================================
           HOW maxIndex CHANGES
============================================================

The condition is:

    if(arr[j] > arr[maxIndex])

If TRUE:

    maxIndex = j;

This means:

"We found an element larger than our current maximum."

If FALSE:

    maxIndex does not change.


Therefore:

    j        -> keeps moving and checking
    maxIndex -> changes only when a larger element is found


============================================================
              i vs j vs maxIndex
============================================================

Remember:

    i
    ↓
    Where should the maximum GO?


    j
    ↓
    Which element am I checking RIGHT NOW?


    maxIndex
    ↓
    Where is the largest element found SO FAR?


Simple memory trick:

    i        = DESTINATION
    j        = SEARCHER
    maxIndex = MAXIMUM'S LOCATION


============================================================
              WHY NOT swap(arr[i], arr[j])?
============================================================

We do:

    swap(arr[i], arr[maxIndex]);

NOT:

    swap(arr[i], arr[j]);

Why?

Because j is only the CURRENT searching position.

After the search finishes, j has moved through the
remaining elements.

maxIndex remembers where the actual largest element is.


============================================================
              COMPLETE WORKFLOW
============================================================

Sample:

    [10, 4, 7, 2, 15, 8]


---------------- PASS 1 ----------------

i = 0

Initially:

    maxIndex = 0

Array:

    [10, 4, 7, 2, 15, 8]
     ↑
     i
     maxIndex


Search:

    j = 1:
        4 > 10 -> FALSE

    j = 2:
        7 > 10 -> FALSE

    j = 3:
        2 > 10 -> FALSE

    j = 4:
        15 > 10 -> TRUE
        maxIndex = 4

    j = 5:
        8 > 15 -> FALSE


Largest element = 15
Its index = 4

Swap:

    swap(arr[0], arr[4])

Array becomes:

    [15, 4, 7, 2, 10, 8]

Index 0 is now sorted.


---------------- PASS 2 ----------------

i = 1

Reset:

    maxIndex = 1

Search:

    j = 2:
        7 > 4 -> TRUE
        maxIndex = 2

    j = 3:
        2 > 7 -> FALSE

    j = 4:
        10 > 7 -> TRUE
        maxIndex = 4

    j = 5:
        8 > 10 -> FALSE


Largest element = 10
Index = 4

Swap:

    swap(arr[1], arr[4])

Array:

    [15, 10, 7, 2, 4, 8]

Indexes 0 and 1 are now sorted.


---------------- PASS 3 ----------------

i = 2

Initially:

    maxIndex = 2

Search:

    j = 3:
        2 > 7 -> FALSE

    j = 4:
        4 > 7 -> FALSE

    j = 5:
        8 > 7 -> TRUE
        maxIndex = 5


Largest element = 8
Index = 5

Swap:

    swap(arr[2], arr[5])

Array:

    [15, 10, 8, 2, 4, 7]


---------------- PASS 4 ----------------

i = 3

Initially:

    maxIndex = 3

Search:

    j = 4:
        4 > 2 -> TRUE
        maxIndex = 4

    j = 5:
        7 > 4 -> TRUE
        maxIndex = 5


Largest element = 7
Index = 5

Swap:

    swap(arr[3], arr[5])

Array:

    [15, 10, 8, 7, 4, 2]


---------------- PASS 5 ----------------

i = 4

Initially:

    maxIndex = 4

Search:

    j = 5:
        2 > 4 -> FALSE

maxIndex remains 4.

Swap:

    swap(arr[4], arr[4])

Final:

    [15, 10, 8, 7, 4, 2]


============================================================
             DESCENDING CORE CODE
============================================================

    for(int i = 0; i < arr.size() - 1; i++)
    {
        int maxIndex = i;

        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }

        swap(arr[i], arr[maxIndex]);
    }


============================================================
                 KEY TAKEAWAY
============================================================

DESCENDING SELECTION SORT:

    Find the LARGEST
          ↓
    Remember its index
          ↓
    Swap it with arr[i]
          ↓
    Move i forward
          ↓
    Repeat

Most important line:

    maxIndex = i;

Most important comparison:

    arr[j] > arr[maxIndex]

Final swap:

    swap(arr[i], arr[maxIndex])


TIME COMPLEXITY:
----------------

Best Case    -> O(n²)
Average Case -> O(n²)
Worst Case   -> O(n²)

SPACE COMPLEXITY:

    O(1)

Selection Sort works IN-PLACE.


============================================================
                 FINAL MEMORY TRICK
============================================================

ASCENDING:

    SMALL → LARGE

    minIndex

    arr[j] < arr[minIndex]

    swap(arr[i], arr[minIndex])


DESCENDING:

    LARGE → SMALL

    maxIndex

    arr[j] > arr[maxIndex]

    swap(arr[i], arr[maxIndex])


In BOTH versions:

    i        = destination
    j        = searcher
    index    = remembers the best element found so far

The ONLY major difference is:

    Ascending  -> find MINIMUM
    Descending -> find MAXIMUM

============================================================
*/