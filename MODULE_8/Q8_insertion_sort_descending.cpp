#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;

    cout <<"enter the number of elements : ";
    cin >> n;

    vector<int>arr(n);
    
    cout <<"enter the elements : ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        
        int j=i-1;
        while(j>=0 && key>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    cout <<"sorted array : ";
    for(int x : arr ){
        cout << x << " ";
    }

    return 0;
}



/*
============================================================
        INSERTION SORT - DESCENDING ORDER
============================================================

1. WHAT IS INSERTION SORT?
--------------------------
Insertion Sort builds the sorted array one element at a time.

For descending order, the elements are arranged from
largest to smallest.

Example:

    [7, 5, 9, 2, 6]

After sorting:

    [9, 7, 6, 5, 2]


2. MAIN IDEA
------------
The array is divided conceptually into:

    SORTED PART | UNSORTED PART

Initially, the first element is considered sorted.

For every next element:

    1. Store the current element in 'key'.
    2. Compare key with elements on its left.
    3. For descending order, shift SMALLER elements
       one position to the right.
    4. Continue moving backwards.
    5. Insert key into its correct position.


3. IMPORTANT VARIABLES
----------------------

    i
    |
    Selects the current element that we want to insert.

    key
    |
    Stores the current element safely before shifting.

    j
    |
    Moves backwards through the sorted portion.


4. MAIN PIECE OF CODE
---------------------

    for(int i = 1; i < arr.size(); i++){

        int key = arr[i];

        int j = i - 1;

        while(j >= 0 && key > arr[j]){

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;
    }


5. EXPLANATION OF THE MAIN CODE
--------------------------------

    for(int i = 1; i < arr.size(); i++)

We start from index 1 because the first element is already
considered sorted.

i selects the next element that needs to be inserted.


------------------------------------------------------------

    int key = arr[i];

The current element is stored in 'key'.

We need to save it because other elements may be shifted
while finding its correct position.

For descending order, key should eventually be placed
where all elements before it are greater than or equal
to it and all elements after it are smaller.


------------------------------------------------------------

    int j = i - 1;

j starts one position to the left of key.

It moves backwards through the already sorted portion.


------------------------------------------------------------

    while(j >= 0 && key > arr[j])

There are two conditions:

    j >= 0
        Makes sure j does not move outside the array.

    key > arr[j]
        Checks whether key is greater than the element
        on its left.

For DESCENDING order, if key is greater, the smaller
element must be shifted to the right.

Example:

    [7, 5]

    key = 5

    5 > 7 → FALSE

No shifting is needed.

But:

    [5, 7]

    key = 7

    7 > 5 → TRUE

So 5 must move to the right.


------------------------------------------------------------

    arr[j + 1] = arr[j];

This shifts the smaller element one position to the right.

Example:

    [5, 7]

If key = 7:

    [5, 5]

The original 5 is shifted right to make space for key.


------------------------------------------------------------

    j--;

After shifting an element, j moves one position backwards.

This allows us to check the next element on the left.


------------------------------------------------------------

    arr[j + 1] = key;

When the while loop stops, key is placed in its correct
position.

We use j + 1 because j has moved one position beyond the
correct insertion position.


============================================================
          WORKFLOW FOR [5, 7, 4, 9]
============================================================

We want DESCENDING order.

Final expected result:

    [9, 7, 5, 4]


-------------------- PASS 1 --------------------

Initial:

    [5] | [7, 4, 9]

The first element 5 is considered sorted.

    i = 1
    key = 7
    j = 0

Array:

    [5, 7, 4, 9]
     ↑  ↑
     j key


Check:

    key > arr[j]

    7 > 5

TRUE

So 5 is smaller than key and must move right.

Shift:

    arr[j + 1] = arr[j]

Array becomes:

    [5, 5, 4, 9]

Then:

    j--

    j = -1

Now j >= 0 is false.

Insert key:

    arr[j + 1] = key
    arr[0] = 7

Array becomes:

    [7, 5, 4, 9]

Sorted portion:

    [7, 5] | [4, 9]


-------------------- PASS 2 --------------------

    i = 2
    key = 4
    j = 1

Array:

    [7, 5, 4, 9]
        ↑  ↑
        j key

Check:

    4 > 5

FALSE

No shifting is required.

Array remains:

    [7, 5, 4, 9]

Sorted portion:

    [7, 5, 4] | [9]


-------------------- PASS 3 --------------------

    i = 3
    key = 9
    j = 2

Array:

    [7, 5, 4, 9]
           ↑  ↑
           j key

First comparison:

    9 > 4

TRUE

4 is smaller, so shift it right:

    [7, 5, 4, 4]

Move j backwards:

    j = 1

Second comparison:

    9 > 5

TRUE

Shift 5:

    [7, 5, 5, 4]

Move j backwards:

    j = 0

Third comparison:

    9 > 7

TRUE

Shift 7:

    [7, 7, 5, 4]

Move j backwards:

    j = -1

Now the loop stops.

Insert key at:

    arr[j + 1]

    arr[0] = 9

Final array:

    [9, 7, 5, 4]


============================================================
                 FINAL WORKFLOW
============================================================

Input:

    [5, 7, 4, 9]

Pass 1:
    key = 7
    Shift 5
    [7, 5, 4, 9]

Pass 2:
    key = 4
    No shifting
    [7, 5, 4, 9]

Pass 3:
    key = 9
    Shift 4
    Shift 5
    Shift 7
    [9, 7, 5, 4]

Final:

    [9, 7, 5, 4]


============================================================
          ASCENDING VS DESCENDING
============================================================

ASCENDING:

    while(j >= 0 && key < arr[j])

We shift LARGER elements to the right.

Example:

    7 > 4

7 moves right.


DESCENDING:

    while(j >= 0 && key > arr[j])

We shift SMALLER elements to the right.

Example:

    7 > 5

5 moves right.


The only major change is the comparison:

    Ascending  → key < arr[j]

    Descending → key > arr[j]


============================================================
                KEY POINT TO REMEMBER
============================================================

For DESCENDING Insertion Sort:

    Take key
        ↓
    Compare with elements on the left
        ↓
    If key is GREATER
        ↓
    Shift the smaller element right
        ↓
    Move j backwards
        ↓
    Insert key at arr[j + 1]


IMPORTANT:

    key = element being inserted

    j = moves backwards

    arr[j + 1] = arr[j]
        → shifts a smaller element right

    arr[j + 1] = key
        → inserts key into its correct position


TIME COMPLEXITY:
    Best Case    : O(n)
    Average Case : O(n²)
    Worst Case   : O(n²)

SPACE COMPLEXITY:
    O(1)

============================================================
*/