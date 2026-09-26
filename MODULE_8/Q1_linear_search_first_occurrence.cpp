#include<iostream>
#include<vector>
using namespace std;

int main(){
    int target,n;
    int index = -1;

    cout <<"enter the number of elements : ";
    cin >> n;

    cout << "enter the elements : ";

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "enter the target : ";
    cin >> target;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    cout << index;
    return 0;
}




/*
============================================================
MODULE 8 — TOPIC 5: LINEAR SEARCH
============================================================

1. WHAT IS LINEAR SEARCH?

Linear Search is a searching algorithm that checks elements
one by one from the beginning of an array until:

    • The target element is found
    OR
    • The entire array has been checked

It is useful when we do not know the position of the target.

------------------------------------------------------------

2. BASIC IDEA

Example:

    arr = [10, 20, 30, 40, 50]
    target = 40

Search process:

    arr[0] → 10 → not found
    arr[1] → 20 → not found
    arr[2] → 30 → not found
    arr[3] → 40 → FOUND

Therefore:

    Index = 3

------------------------------------------------------------

3. WHY DO WE NEED LINEAR SEARCH?

If we know the index:

    arr[3]

we can directly access the element in O(1).

But if we only know the value:

    target = 40

we do not know where it is.

Therefore, we may need to check the elements one by one.

This is the basic idea behind Linear Search.

------------------------------------------------------------

4. BASIC WORKFLOW

    Start from index 0
          ↓
    Compare arr[i] with target
          ↓
    Is arr[i] == target?
       ↙          ↘
     YES           NO
      ↓             ↓
  Store index    Move to next
      ↓             index
    break
      ↓
    Print result

If the loop finishes without finding the target,
the index remains -1.

------------------------------------------------------------

5. IMPORTANT TECHNIQUE — INITIALIZE INDEX TO -1

    int index = -1;

Why?

Because -1 represents:

    "Target was not found."

If the target is found:

    index = i;

If it is never found:

    index remains -1.

Therefore:

    index >= 0 → target found
    index == -1 → target not found

------------------------------------------------------------

6. FINDING THE FIRST OCCURRENCE

Example:

    arr = [10, 20, 10, 30, 10, 40]
    target = 10

The target occurs at:

    index 0
    index 2
    index 4

But the question asks for the FIRST occurrence.

So:

    i = 0
    arr[0] == 10
    FOUND
    index = 0
    break

We stop immediately.

Output:

    0

The break is important because it prevents the algorithm
from continuing to later occurrences.

------------------------------------------------------------

7. CODE STRUCTURE USED

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            index = i;
            break;
        }
    }

The loop checks every element sequentially.

The if condition compares the current element with target.

When the target is found, its index is stored and the
search stops.

------------------------------------------------------------

8. IMPORTANT DIFFERENCE

ARRAY ACCESS:

    arr[i]

Accessing an element using its known index is O(1).

LINEAR SEARCH:

    Check arr[0]
    Check arr[1]
    Check arr[2]
    ...
    
The position of the target is unknown, so multiple elements
may need to be checked.

Therefore Linear Search can take O(n) time.

------------------------------------------------------------

9. TIME COMPLEXITY

BEST CASE:

Target is the first element.

Example:

    [10, 20, 30, 40]
     ↑
   target

Only one comparison is needed.

    Best Case = O(1)

WORST CASE:

Target is the last element or does not exist.

Example:

    [10, 20, 30, 40]
                 ↑
               target

or:

    target = 50

The algorithm may check all n elements.

    Worst Case = O(n)

AVERAGE CASE:

The target may occur somewhere in the middle.

    Average Case = O(n)

------------------------------------------------------------

10. SPACE COMPLEXITY

The algorithm uses only a fixed number of extra variables:

    i
    target
    index
    n

It does not create another array or vector.

Therefore:

    Space Complexity = O(1)

------------------------------------------------------------

11. PLACEMENT-IMPORTANT RULE

Do not confuse:

    Array Access → O(1)

with:

    Searching an array → O(n)

Why?

    arr[i]
       ↓
    position already known
       ↓
    O(1)

But:

    Find target
       ↓
    position unknown
       ↓
    may check n elements
       ↓
    O(n)

------------------------------------------------------------

12. EDGE CASES

Case 1: Target is the first element

    [10, 20, 30]
     ↑
    target

Answer = 0
Time = O(1)

Case 2: Target is the last element

    [10, 20, 30]
             ↑
            target

Answer = 2
Time = O(n)

Case 3: Target does not exist

    [10, 20, 30]
    target = 50

Answer = -1
Time = O(n)

Case 4: Duplicate target

    [10, 20, 10, 30]

For FIRST occurrence:

    Answer = 0

------------------------------------------------------------

13. OUR IMPLEMENTATION

The program:

    • Takes n from the user
    • Takes n array elements
    • Takes the target
    • Performs Linear Search
    • Stores the first matching index
    • Stops using break
    • Prints -1 if the target is not found

------------------------------------------------------------

14. KEY PLACEMENT TAKEAWAYS

    1. Linear Search checks elements sequentially.

    2. It works even when the array is unsorted.

    3. First occurrence can be obtained by stopping
       immediately after the first match.

    4. Best-case time = O(1).

    5. Average-case time = O(n).

    6. Worst-case time = O(n).

    7. Auxiliary space = O(1).

    8. arr[i] access itself is O(1), but searching through
       the array can require O(n) accesses.

    9. Initialize the result/index to -1 when -1 represents
       "not found."

   10. break can improve the actual work when the target is
       found early, but the worst-case complexity remains O(n).

------------------------------------------------------------

15. LEARNING WORKFLOW COMPLETED

    Concept
       ↓
    Why Linear Search?
       ↓
    Example
       ↓
    Placement-oriented problem
       ↓
    First occurrence
       ↓
    User implementation
       ↓
    Code review
       ↓
    Output issue identified
       ↓
    User fixed the issue
       ↓
    Complexity analysis
       ↓
    Topic summary
       ↓
    GitHub

============================================================
LINEAR SEARCH — TOPIC COMPLETE
============================================================
*/