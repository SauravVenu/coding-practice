#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;    // declaring an empty vector

    cout << "enter 5 elements : ";
    for(int i = 0; i<5;i++){
        int num;
        cin >> num;     // user enters the elements
        v.push_back(num);  // pushing the elements entered by the user into the vector
    }
    for(int i = 0; i < v.size(); i++){ // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    // removes the last element from the vector

    v.pop_back();
    cout << "after popping the last element : ";
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    //inserting element 100 into index 3 


    v.insert(v.begin()+3,100);
    cout << "after inserting 100 at the third index : ";
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    // erasing an element from the vector at index 1

    v.erase(v.begin()+1);
    cout << "after removing the element at the first index : ";
    for(int i = 0; i < v.size(); i++){  // display the elements
        cout << v[i] << " ";
    }
    cout << endl;


    //diplays the size of the current vector

    cout << "size of the vector : "<< v.size() << endl;

    // resize the current vector to size 2
    v.resize(2);
    for(int i = 0; i < v.size(); i++){   // display the elements
        cout << v[i] << " ";
    }

    cout << endl;


    // displays the first element in the vector
    cout << "first element in the vector : " << v.front() << endl;


    //displays the last elemnt in the vector
    cout << "displays the last element in the vector : " << v.back() <<endl;
    return 0;
}


/*
==================== VECTOR SUMMARY ====================

1. vector is a dynamic array whose size can grow or shrink.

2. Creating vectors:
   vector<int> v;                  // empty vector
   vector<int> v(5);               // 5 actual elements, initialized to 0
   vector<int> v = {10,20,30};     // initialized with values

3. push_back(x):
   Adds a new element at the end of the vector.

4. pop_back():
   Removes the last element from the vector.

5. size():
   Returns the number of actual elements currently in the vector.

6. capacity():
   Represents the amount of allocated storage available for elements.
   Size and capacity are different.

7. Indexing:
   v[i] accesses the element at index i.
   v[i] = value changes an existing element.

8. at(i):
   Accesses the element at index i with bounds checking.
   An invalid index causes an out_of_range exception.

9. front():
   Returns the first element of the vector.

10. back():
    Returns the last element of the vector.

11. clear():
    Removes all elements from the vector.
    After clear(), size becomes 0.

12. insert():
    Adds an element at a specific position.
    Example:
    v.insert(v.begin() + i, value);

    Existing elements after that position shift to the right.

13. erase():
    Removes an element at a specific position.
    Example:
    v.erase(v.begin() + i);

    Elements after the removed element shift to the left.

14. resize(n):
    Changes the number of actual elements in the vector.
    If increased, new int elements are initialized to 0.
    If decreased, elements beyond the new size are removed.

15. Iterator:
    An iterator is used to point to an element/position
    inside a container.
    v.begin() gives an iterator pointing to the first element.

16. Important differences:
    push_back() -> adds an element at the end
    pop_back()  -> removes the last element
    insert()    -> adds at a specific position
    erase()     -> removes from a specific position
    resize()    -> changes the number of elements
    clear()     -> removes all elements

==========================================================
*/