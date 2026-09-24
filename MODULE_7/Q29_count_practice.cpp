#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int num,search,search_2;
    
    cout << "enter 10 integers : ";
    for(int i=0;i<10;i++){
        cin>>num;
        v.push_back(num);
    }

    cout<< "Original vector: ";
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    cout << "enter the element to search : ";
    cin >> search;
    
    cout << endl;

    int it = count(v.begin(),v.end(),search);   //here it is int   , here we are find the counnt of the element in the entire vector

    if(it!=0){
        cout << search << " occurs "<<it <<" times";
    }else{
        cout << "element doesnt exist";
    }
    
    cout << endl;
    cout << "enter the next element to search : ";
    cin >> search_2;
    
    cout << endl;

    int it_2 = count(v.begin()+2, v.begin()+8,search_2);

    if(it_2!=0){
        cout << search_2 <<" occurs "<<it_2 <<" times in the indices 2 to 7";
    }else{
        cout << "element doesnt exist";
    }
    cout << endl;

    return 0;
}



/*
TOPIC: count()

1. PURPOSE:
   count() counts how many times a specific value
   occurs in a range.

2. HEADER FILE:
   #include <algorithm>

3. SYNTAX:
   count(start, end, value);

4. FOR A VECTOR:

   count(v.begin(), v.end(), 10);

5. RETURN VALUE:
   count() returns an integer.

   Example:
   vector<int> v = {10, 20, 10, 30, 10};

   count(v.begin(), v.end(), 10)
       → 3

6. ENTIRE VECTOR:

   count(v.begin(), v.end(), value);

   Counts the value throughout the complete vector.

7. PARTIAL RANGE:

   count(v.begin() + 2, v.begin() + 8, value);

   Checks indices:

       2, 3, 4, 5, 6, 7

   because the end iterator is exclusive.

8. DIFFERENCE FROM find():

   find()
       → returns an iterator to the first occurrence.

   count()
       → returns the number of occurrences.

9. EXAMPLE:

   vector<int> v = {5, 2, 5, 3, 5, 2, 7};

   count(v.begin(), v.end(), 5)
       → 3

   count(v.begin(), v.end(), 2)
       → 2

10. ZERO OCCURRENCES:

    If the value does not exist:

    count(...)
        → 0

11. ORIGINAL VECTOR:
    count() does not modify the vector.

12. RANGE RULE:

    start → included
    end   → excluded

    Example:

    count(v.begin() + 1, v.begin() + 6, 4);

    checks indices:

    1, 2, 3, 4, 5

13. TIME COMPLEXITY:
    O(n)

14. MAIN IDEA:

    count()
       ↓
    searches the specified range
       ↓
    counts matching elements
       ↓
    returns an integer

15. KEY DISTINCTION:

    find()  → iterator
    count() → integer
*/