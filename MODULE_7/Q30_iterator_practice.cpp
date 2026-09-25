#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int num,search;
    
    cout << "enter the elements : ";
    for(int i=0;i<8;i++){
        cin>> num;
        v.push_back(num);
    }

    cout << "orginal vector : ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    
    cout << "using iterator : ";
    for(auto it = v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "enter the element to search : ";
    cin >> search;

    auto it_2 = find(v.begin(),v.end(),search);

    if(it_2!=v.end()){
        cout << search << " exists" << endl;
        cout << "index : " <<it_2-v.begin();
        *it_2 = 100;
    }else{
        cout << "element not found ";
    }
    
    cout << endl;

    cout <<"vector after modification : ";
    for(int x : v){
        cout << x << " ";    // we can use iterator method also   , for(it_2 = v.begin(); it!=v.end();it++) { cout <<*it_2 << " " ;}
    }
    cout << endl;
    auto it_3 = max_element(v.begin(),v.end());
    cout << "max element : "<< *it_3 << endl;
    cout << "index : "<< it_3 -v.begin();

    return 0;
}




/*
========================================================
MODULE 7 — STL
TOPIC 17: ITERATORS — SUMMARY
========================================================

1. WHAT IS AN ITERATOR?
   An iterator is an object used to point to and move
   through elements of a container such as a vector.

2. BEGIN() AND END()
   v.begin()
   -> Iterator pointing to the first element.

   v.end()
   -> Iterator pointing to the position AFTER the last
      element. It does not point to an actual element.

3. DEREFERENCING
   *it
   -> Gives the value of the element to which the
      iterator is currently pointing.

4. MOVING AN ITERATOR
   it++
   -> Moves the iterator to the next element.

   v.begin() + n
   -> Gives an iterator pointing to index n.

5. ITERATOR TRAVERSAL
   for(auto it = v.begin(); it != v.end(); it++){
       cout << *it << " ";
   }

6. MODIFYING THROUGH AN ITERATOR
   *it = 100;

   This changes the value of the element to which
   the iterator is pointing.

7. FIND() WITH ITERATORS
   auto it = find(v.begin(), v.end(), value);

   find() returns an iterator pointing to the first
   matching element.

   if(it != v.end())
   -> Element was found.

   if(it == v.end())
   -> Element was not found.

8. GETTING THE INDEX
   it - v.begin()

   This gives the index of the element pointed to
   by the iterator.

9. MAX_ELEMENT() WITH ITERATORS
   auto it = max_element(v.begin(), v.end());

   max_element() returns an iterator pointing to the
   largest element.

   *it
   -> Largest value.

   it - v.begin()
   -> Index of largest element.

10. MIN_ELEMENT() WITH ITERATORS
    auto it = min_element(v.begin(), v.end());

    min_element() returns an iterator pointing to the
    smallest element.

11. INSERT() WITH ITERATORS
    v.insert(v.begin() + index, value);

    insert() requires a position/iterator.

    v[index] gives a VALUE, not an iterator.

12. ERASE() WITH ITERATORS
    v.erase(v.begin() + index);

    erase() requires a position/iterator.

13. IMPORTANT DIFFERENCE
    v[index]
    -> Gives the VALUE at that index.

    v.begin() + index
    -> Gives an ITERATOR pointing to that position.

14. RANGE-BASED LOOP VS ITERATOR LOOP

    Range-based:
    for(int x : v)

    Iterator:
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it;
    }

    Both can be used to traverse a vector.

15. ITERATOR REUSE

    The same iterator variable can be reused:

    it = find(...);
    it = max_element(...);

    But the iterator can point to only one position
    at a time. Assigning it to another position changes
    where it points.

========================================================
LEARNING WORKFLOW COMPLETED:

Understand → Predict → Code → Debug → Compile → Run
→ Verify → Summarize → GitHub
========================================================
*/