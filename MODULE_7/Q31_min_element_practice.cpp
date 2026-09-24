#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int num,start_range,end_range;

    cout <<"enter the elements : ";
    for(int i=0;i<8;i++){
        cin>>num;
        v.push_back(num);
    }

    cout <<"orginal vector : ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    auto it = min_element(v.begin(),v.end());      //  Note : min() and min_element() is different
    cout << "smallest element : " << *it <<endl;
    cout <<"index : "<< it-v.begin()<< endl;

    cout << "enter the range : ";
    cin >> start_range >> end_range;

    auto it_2 = min_element(v.begin()+start_range,v.begin()+end_range+1);   // min_element requires an iterator as an argument

    cout << "smallest element in the range : " << *it_2 <<endl;
    cout <<"index : "<< it_2-v.begin()<< endl;
  
    return 0;
}


/*   
max_element() → largest
min_element() → smallest

both:
→ return iterator
→ *it gives value
→ it - v.begin() gives index
→ start included
→ end excluded
→ O(n)
*/



/*
TOPIC: min_element()

1. PURPOSE:
   min_element() finds the smallest element in a range.

2. HEADER FILE:
   #include <algorithm>

3. SYNTAX:
   min_element(start, end);

4. FOR A VECTOR:
   min_element(v.begin(), v.end());

5. RETURN VALUE:
   min_element() returns an ITERATOR.

   It does not directly return the smallest value.

   Example:
       auto it = min_element(v.begin(), v.end());

6. GETTING THE SMALLEST VALUE:

       *it

   The * operator dereferences the iterator and gives
   the value stored at that position.

7. FINDING THE INDEX:

       it - v.begin()

   This gives the index of the smallest element in the
   original vector.

8. RANGE:
   min_element() follows the STL range rule:

       start → included
       end   → excluded

   Example:

       min_element(v.begin() + 2,
                   v.begin() + 6);

   checks indices:

       2, 3, 4, 5

9. INCLUSIVE USER RANGE:

   If the user enters a starting index and ending index
   and BOTH should be included:

       min_element(v.begin() + start_range,
                   v.begin() + end_range + 1);

   Example:
       start = 2
       end = 6

   checks:

       2, 3, 4, 5, 6

10. ORIGINAL VECTOR:
    min_element() does not modify the vector.

11. STL ALGORITHM:
    min_element() is an algorithmic function.

    Use:
        min_element(v.begin(), v.end());

    NOT:
        v.min_element();

12. CONNECTION WITH max_element():

    max_element()
        → returns an iterator to the largest element.

    min_element()
        → returns an iterator to the smallest element.

    Both use the same basic workflow:

        auto it = ...;

        *it
            → gives the value

        it - v.begin()
            → gives the index

13. DIFFERENCE FROM min():

    min(a, b)
        → compares two values and returns the smaller value.

    min_element(start, end)
        → searches a range and returns an iterator
          to the smallest element.

14. TIME COMPLEXITY:
    O(n)

15. MAIN IDEA:

    min_element()
          ↓
      searches range
          ↓
      returns iterator
          ↓
        *it
          ↓
      smallest value

    it - v.begin()
          ↓
        index
*/