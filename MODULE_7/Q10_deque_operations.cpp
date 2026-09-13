#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d ={10,20,30,40,50};   // deque will allows us to initialize values directly

    cout <<"before change : " << endl;

    for(int i = 0; i < d.size();i++){
        cout << d[i] << " ";
    }
    cout << endl;

    d[2]=100;  // deque allows indexing , here it changes the value at index 2 from 30 to 100

    cout << "after change : " << endl;

     for(int i = 0; i < d.size();i++){
        cout << d[i] << " ";
    }
cout << endl;
    cout << "front : "<< d.front() << endl;
    cout << "back : " << d.back() << endl;
    cout << "size : " << d.size() << endl;
    return 0;
}


/*
========================================================
                     DEQUE SUMMARY
========================================================

1. What is a deque?
-------------------
deque = Double Ended Queue

It allows insertion and deletion from BOTH ends.

Example:

[10] [20] [30]

FRONT             BACK
  ↑                 ↑
add/remove       add/remove


2. Creating a deque
-------------------
#include <deque>

deque<int> d;


3. Adding elements
-------------------
push_front(x) → adds x at the FRONT

push_back(x)  → adds x at the BACK


4. Removing elements
--------------------
pop_front() → removes the FRONT element

pop_back()  → removes the BACK element


5. Accessing elements
---------------------
front() → accesses the first element

back()  → accesses the last element

Example:

[10] [20] [30]

d.front() → 10
d.back()  → 30


6. Indexing
-----------
A deque supports random access using [].

Example:

[10] [20] [30]

d[1] → 20

d[1] = 50;

Result:

[10] [50] [30]


7. size()
----------
d.size() → returns the current number of elements.


8. empty()
-----------
d.empty() checks whether the deque is empty.

true  → empty
false → contains elements


9. clear()
-----------
d.clear() removes all elements from the deque.


10. Main advantage
------------------
A deque allows efficient insertion and removal from
both the FRONT and BACK.

push_front() → front
push_back()  → back
pop_front()  → front
pop_back()   → back


11. Comparison
--------------
vector:
- Random access
- Mainly used for dynamic arrays
- push_back()

queue:
- FIFO
- Add at back
- Remove from front
- No indexing

deque:
- Add/remove from both ends
- Supports random access
- More flexible than queue


12. Important operations
------------------------
push_front()
push_back()
pop_front()
pop_back()
front()
back()
size()
empty()
clear()
operator[]


========================================================
*/