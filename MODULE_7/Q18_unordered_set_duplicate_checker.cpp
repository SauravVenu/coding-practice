#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n;
    unordered_set<int>us;
    
    cout << "enter the elements : ";
    for(int i = 0 ; i < 8 ; i++){
        cin >> n;
        us.insert(n);
    }

    cout << "Unique elements: ";
    for(int x : us){
        cout << x << " ";
    }
    cout << endl;

    cout << "Number of unique elements: " << us.size() << endl;

    if(us.find(50)!=us.end()){
        cout << "50 exists";
        us.erase(50);
    }else{
        cout << "50 doesnt exist";
    }
    cout << endl;

    cout << "After removing : ";
    for(int x : us){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}



/*
====================================================
MODULE 7 - TOPIC 8 : UNORDERED_SET
====================================================

1. WHY unordered_set?
   - Stores unique elements.
   - Useful when we need fast insertion, searching and deletion.
   - Unlike set, it does not maintain elements in sorted order.

2. BASIC SYNTAX
   #include <unordered_set>

   unordered_set<int> us;

3. IMPORTANT PROPERTY
   - Duplicate elements are automatically ignored.
   - There is NO GUARANTEED ORDER while traversing.

4. INSERT
   us.insert(x);

   - Adds x if it is not already present.
   - If x already exists, nothing changes.

5. TRAVERSAL
   for(int x : us){
       cout << x << " ";
   }

   - x represents the actual element.
   - The order should not be relied upon.

6. SIZE
   us.size();

   - Returns the number of unique elements.

7. FIND
   us.find(x);

   - Returns an iterator to x if found.
   - If x is absent, it returns us.end().

   Example:
   if(us.find(50) != us.end()){
       cout << "50 exists";
   }

8. COUNT
   us.count(x);

   - Returns 1 if x exists.
   - Returns 0 if x does not exist.

9. ERASE
   us.erase(x);

   - Removes x from the unordered_set if it exists.

10. EMPTY
    us.empty();

    - Returns true if the unordered_set contains no elements.

11. CLEAR
    us.clear();

    - Removes all elements.

12. SET vs UNORDERED_SET

    set:
    - Unique elements
    - Sorted order
    - Typical operations: O(log n)

    unordered_set:
    - Unique elements
    - No guaranteed order
    - Average insertion/search/deletion: O(1)

13. MAIN IDEA TO REMEMBER

    set          = UNIQUE + SORTED
    unordered_set = UNIQUE + NO GUARANTEED ORDER

====================================================
*/