#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int num,start_index,end_index;
    
    cout <<"enter 8 integers : ";
    for(int i=0;i<8;i++){
        cin>>num;
        v.push_back(num);
    }

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    auto it = max_element(v.begin(),v.end());
    cout << "largest element is : "<<*it << endl;
    cout <<"index : "<< it-v.begin() << endl;

    cout << "enter starting index and ending index : ";
    cin >> start_index >> end_index;

    auto it_2 = max_element(v.begin()+start_index,v.begin()+end_index+1);

    cout <<"largest element in range : "<< *it_2<<endl;
    cout<< "index : "<< it_2-v.begin();

    return 0;
}



/*
TOPIC: max_element()

1. PURPOSE:
   max_element() finds the largest element in a range.

2. HEADER FILE:
   #include <algorithm>

3. SYNTAX:
   max_element(start, end);

4. FOR A VECTOR:
   max_element(v.begin(), v.end());

5. RETURN VALUE:
   max_element() returns an ITERATOR.

   It does not directly return the largest value.

   Example:
       auto it = max_element(v.begin(), v.end());

6. GETTING THE LARGEST VALUE:

       *it

   The * operator dereferences the iterator and gives
   the value stored at that position.

7. FINDING THE INDEX:

       it - v.begin()

   This gives the index of the largest element in the
   original vector.

8. RANGE:
   max_element() follows the STL range rule:

       start → included
       end   → excluded

   Example:

       max_element(v.begin() + 2,
                   v.begin() + 6);

   checks indices:

       2, 3, 4, 5

9. INCLUSIVE USER RANGE:

   If the user enters a starting index and ending index
   and BOTH should be included:

       max_element(v.begin() + start_index,
                   v.begin() + end_index + 1);

   Example:
       start = 2
       end = 6

   checks:

       2, 3, 4, 5, 6

10. ORIGINAL VECTOR:
    max_element() does not modify the vector.

11. STL ALGORITHM:
    max_element() is an algorithmic function.

    Use:
        max_element(v.begin(), v.end());

    NOT:
        v.max_element();

12. CONNECTION WITH find():

    find()
        → returns an iterator to the first matching value.

    max_element()
        → returns an iterator to the largest value.

    In both cases:

        *it
            → gives the value

        it - v.begin()
            → gives the index

13. DIFFERENCE FROM max():

    max(a, b)
        → compares two values and returns the larger value.

    max_element(start, end)
        → searches a range and returns an iterator
          to the largest element.

14. TIME COMPLEXITY:
    O(n)

15. MAIN IDEA:

    max_element()
          ↓
      searches range
          ↓
      returns iterator
          ↓
        *it
          ↓
      largest value

    it - v.begin()
          ↓
      index
*/