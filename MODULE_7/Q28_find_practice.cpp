#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int num,search;

    cout << "enter 8 integers : ";
    for(int i =0;i<8;i++){
        cin >> num;
        v.push_back(num);
    }

    cout  << "original vector : ";
    for(int x :v){
        cout << x << " ";
    }
    cout << endl;

    cout << " enter the element to search : ";
    cin >> search;
    
    auto it = find(v.begin(),v.end(),search);   // it means iterator
    if(it!=v.end()){
        cout << *it << " exists " << endl;
        cout << "value found : "<<*it<< endl; // or search
        cout << "index : "<< (it-v.begin());
    }else{
        cout << "element does not exist";
    }
    cout << endl;

    return 0;
}


/*
TOPIC: find()

1. PURPOSE:
   find() searches for a specific value in a range.

2. HEADER FILE:
   #include <algorithm>

3. SYNTAX FOR VECTOR:
   find(start, end, value);

   Example:
   find(v.begin(), v.end(), 30);

4. RETURN VALUE:
   find() returns an iterator.

   If the element is found:
       → iterator points to the found element.

   If the element is not found:
       → returns v.end().

5. CHECKING WHETHER AN ELEMENT EXISTS:

   if(find(v.begin(), v.end(), 30) != v.end())
   {
       // 30 exists
   }

6. IMPORTANT:
   find() itself returns an iterator.
   Comparing that iterator with end() produces
   a Boolean condition that can be used in if.

7. ACCESSING THE FOUND VALUE:

   auto it = find(v.begin(), v.end(), 30);

   *it
       → gives the value pointed to by the iterator.

8. FINDING THE INDEX:

   it - v.begin()
       → gives the index of the found element.

   Example:
       Vector: 10 20 30 40 50
       Index:   0  1  2  3  4

       If it points to 40:
       it - v.begin() = 3

9. VECTOR vs SET:

   Vector:
       find(v.begin(), v.end(), 30)

   Set:
       s.find(30)

   Both return an iterator, but vector uses the
   STL algorithm while set has its own member function.

10. IMPORTANT DIFFERENCE FROM count():

    find()
        → finds an element and returns an iterator
          to its first occurrence.

    count()
        → returns the number of occurrences.

11. ORIGINAL VECTOR:
    find() does not modify the vector.

12. MAIN IDEA:

    find()
       ↓
    iterator
       ↓
    compare with end()
       ↓
    found / not found

    *it
       ↓
    value

    it - v.begin()
       ↓
    index
*/