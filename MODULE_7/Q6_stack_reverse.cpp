#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout <<"Reversed stack is : ";
    while(!s.empty()){   // checks weather the stack is empty , once the stack is empty dont use top() or pop(), because of the we are using while here
        cout << s.top() << " ";   // accessin the top element
        s.pop();   // removing the top element
    }
    return 0;
}



/*
==================== STACK SUMMARY ====================

1. STACK
   - A stack is a linear data structure that follows LIFO.
   - LIFO = Last In, First Out.
   - The element inserted last is removed first.

2. CREATING A STACK
   #include <stack>

   stack<int> s;

   - This creates a stack that stores integers.

3. push()
   - Adds an element to the TOP of the stack.

   s.push(10);
   s.push(20);

   Stack:
       TOP → 20
             10

4. top()
   - Accesses/returns the element at the TOP.
   - It does NOT remove the element.

   s.top();

5. pop()
   - Removes the element at the TOP.
   - pop() does NOT return the removed value.

   To get and remove the top:
       int x = s.top();
       s.pop();

6. size()
   - Returns the number of elements currently in the stack.

   s.size();

7. empty()
   - Checks whether the stack contains no elements.
   - Returns true if empty and false otherwise.

   s.empty();

8. SAFE ACCESS
   - Never call top() or pop() on an empty stack.
   - Use:

       if(!s.empty())
       {
           cout << s.top();
       }

9. NO RANDOM ACCESS
   - A stack only allows access to its TOP element.
   - s[2] is not valid for a stack.

10. LIFO WORKFLOW
    If we push:

       10 → 20 → 30 → 40

    The stack becomes:

       TOP → 40
             30
             20
             10

    pop() removes:
       40 → 30 → 20 → 10

11. PROCESSING A WHOLE STACK
    A common pattern is:

       while(!s.empty())
       {
           cout << s.top();
           s.pop();
       }

    - Continue while the stack has elements.
    - Access the top.
    - Remove the top.
    - Stop when the stack becomes empty.

12. STACK WITH OTHER CONTAINERS
    Containers can be nested.

       vector<stack<int>>
       stack<pair<int,int>>
       pair<int,stack<int>>

    The type stored inside determines what top() returns.

    stack<int>:
       s.top() → int

    stack<pair<int,int>>:
       s.top() → pair<int,int>

=======================================================
*/