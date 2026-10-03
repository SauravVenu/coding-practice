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
        while(j>=0 && key<arr[j]){
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
                INSERTION SORT - SUMMARY
============================================================

1. WHAT IS INSERTION SORT?
--------------------------
Insertion Sort is a sorting algorithm that builds the sorted
array one element at a time.

It divides the array into two parts:

    SORTED PART | UNSORTED PART

Initially, the first element is considered sorted.

For every next element:
    1. Store the element in 'key'.
    2. Compare it with elements on its left.
    3. Shift larger elements one position to the right.
    4. Insert 'key' into its correct position.

Example:

    [5] | [4 7 6]
     ↑       ↑
 sorted   unsorted


2. MAIN IDEA
------------
Unlike Selection Sort:

Selection Sort:
    Find minimum → Swap

Insertion Sort:
    Take current element → Shift larger elements → Insert


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

        while(j >= 0 && key < arr[j]){

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = key;
    }


5. EXPLANATION OF THE MAIN CODE
--------------------------------

    for(int i = 1; i < arr.size(); i++)

We start from index 1 because the element at index 0 is
already considered sorted.

------------------------------------------------------------

    int key = arr[i];

The current element is stored in 'key'.

We need to store it because the elements may be shifted
while finding its correct position.

------------------------------------------------------------

    int j = i - 1;

j starts immediately to the left of the key.

It moves backwards through the sorted portion.

------------------------------------------------------------

    while(j >= 0 && key < arr[j])

Two conditions are checked:

    j >= 0
        Makes sure we don't move outside the array.

    key < arr[j]
        Checks whether the element on the left is greater
        than the key.

If both are true, that larger element must move right.

------------------------------------------------------------

    arr[j + 1] = arr[j];

Moves the larger element one position to the right.

Example:

    [5, 7, 7, 6]
        ↑
       arr[j]

The 7 is shifted to the right to create space for key.

------------------------------------------------------------

    j--;

Moves j one position backwards so we can check the next
element on the left.

------------------------------------------------------------

    arr[j + 1] = key;

When the while loop stops, j is at the position just before
where key belongs.

Therefore, key is inserted at:

    j + 1


============================================================
              WORKFLOW FOR [5, 4, 7, 6]
============================================================

Initial array:

    [5, 4, 7, 6]

The first element 5 is considered sorted.

    [5] | [4, 7, 6]


-------------------- PASS 1 --------------------

    i = 1

    key = arr[1]
    key = 4

    j = i - 1
    j = 0

Array:

    [5, 4, 7, 6]
     ↑  ↑
     j key

Check:

    key < arr[j]
    4 < 5

TRUE

So shift 5 to the right:

    [5, 5, 7, 6]

Now:

    j--

    j = -1

The condition j >= 0 is now false.

Insert key at:

    arr[j + 1]
    arr[0] = 4

Array becomes:

    [4, 5, 7, 6]

Sorted portion:

    [4, 5] | [7, 6]


-------------------- PASS 2 --------------------

    i = 2

    key = arr[2]
    key = 7

    j = 1

Array:

    [4, 5, 7, 6]
        ↑  ↑
        j key

Check:

    7 < 5

FALSE

So nothing is shifted.

Array remains:

    [4, 5, 7, 6]

Sorted portion:

    [4, 5, 7] | [6]


-------------------- PASS 3 --------------------

    i = 3

    key = arr[3]
    key = 6

    j = 2

Array:

    [4, 5, 7, 6]
           ↑  ↑
           j key

Check:

    6 < 7

TRUE

Shift 7 to the right:

    [4, 5, 7, 7]

Move j backwards:

    j = 1

Check again:

    6 < 5

FALSE

Stop.

Insert key at:

    arr[j + 1]

    arr[2] = 6

Final array:

    [4, 5, 6, 7]


============================================================
                    FINAL WORKFLOW
============================================================

Input:

    [5, 4, 7, 6]

Pass 1:
    key = 4
    Shift 5
    [4, 5, 7, 6]

Pass 2:
    key = 7
    No shifting needed
    [4, 5, 7, 6]

Pass 3:
    key = 6
    Shift 7
    [4, 5, 6, 7]

Final:

    [4, 5, 6, 7]


============================================================
                 KEY POINT TO REMEMBER
============================================================

Insertion Sort works like arranging playing cards.

Take one card:
        ↓
Compare with cards on the left
        ↓
Move larger cards to the right
        ↓
Insert the card in the correct position


IMPORTANT:

    key = element being inserted

    j = moves backwards

    arr[j + 1] = arr[j]
        → shifts a larger element right

    arr[j + 1] = key
        → inserts the key


TIME COMPLEXITY:
    Best Case    : O(n)
    Average Case : O(n²)
    Worst Case   : O(n²)

SPACE COMPLEXITY:
    O(1)

============================================================
*/
