#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(101);
    q.push(102);
    q.push(103);
    q.push(104);
    q.push(105);

    
    while(!q.empty()){
        cout << "Processing token " << q.front() << endl;
        q.pop();
    }
        cout << "queue is empty ";

    return 0;
}


// OR    USING FOR LOOP
/*for(int i=q.size();i>=0;i--){
    if(!q.empty()){
        cout << "Processing token " << q.front() << endl;
        q.pop();
    }else{
        cout << "queue is empty ";
    }
}*/



/*
========================================================
                    QUEUE SUMMARY
========================================================

1. What is a Queue?
-------------------
A queue is a linear data structure that follows FIFO:

FIFO = First In, First Out

The element that enters first is removed first.

Real-life example:
A line of people waiting at a counter.

The first person in the line gets served first.


2. Creating a Queue
-------------------
#include <queue>

queue<int> q;

Here:
queue<int> → queue that stores integers
q          → name of the queue


3. Adding Elements - push()
---------------------------
q.push(10);

push() adds an element to the BACK of the queue.

Example:

q.push(10);
q.push(20);
q.push(30);

Queue:

Front → [10] [20] [30] ← Back


4. Accessing the Front - front()
--------------------------------
q.front();

front() gives the element at the FRONT.

For:

[10] [20] [30]

q.front() → 10

Important:
front() only accesses the element.
It does NOT remove it.


5. Accessing the Back - back()
------------------------------
q.back();

back() gives the last element in the queue.

For:

[10] [20] [30]

q.back() → 30


6. Removing Elements - pop()
----------------------------
q.pop();

pop() removes the element from the FRONT.

Example:

Before:
[10] [20] [30]

q.pop();

After:
[20] [30]

Important:
pop() removes the front element but does NOT return it.

If we want to see the element before removing it:

cout << q.front();
q.pop();


7. size()
----------
q.size();

Returns the number of elements currently present.

Example:

[10] [20] [30]

q.size() → 3

After q.pop():

[20] [30]

q.size() → 2


8. empty()
-----------
q.empty();

Checks whether the queue contains any elements.

Returns:
true  → queue is empty
false → queue contains elements

Example:

if(!q.empty())
{
    cout << q.front();
}


9. FIFO Workflow
----------------
Suppose:

q.push(10);
q.push(20);
q.push(30);

Queue:

[10] [20] [30]

First pop:
10 is removed

[20] [30]

Second pop:
20 is removed

[30]

Third pop:
30 is removed

[]

Therefore:

10 → 20 → 30

This is FIFO.


10. Processing Until Empty
--------------------------
When we want to process every element until the queue becomes empty:

while(!q.empty())
{
    cout << q.front();
    q.pop();
}

The condition checks the CURRENT state of the queue.

As long as the queue contains elements:
→ process the front
→ remove the front
→ check again

When the queue becomes empty:
→ condition becomes false
→ loop stops


11. Queue vs Stack
------------------
Stack:
LIFO → Last In, First Out

Queue:
FIFO → First In, First Out

Stack:
push → top
pop  → top

Queue:
push → back
pop  → front


12. Important Safety Rule
-------------------------
Do not use:

q.front();
q.back();
q.pop();

when the queue is empty.

Always check:

if(!q.empty())

before accessing or removing elements.


13. Common Queue Operations
---------------------------
push()  → add element at back
pop()   → remove element from front
front() → access first element
back()  → access last element
size()  → number of elements
empty() → check whether queue is empty


14. DSA Importance
------------------
Queues are commonly used when elements must be processed
in the same order in which they arrive.

Examples:
- Scheduling
- Processing requests
- BFS (Breadth First Search)
- Printer queues
- Network/data processing

========================================================
*/