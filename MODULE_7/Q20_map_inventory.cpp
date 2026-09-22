#include<iostream>
#include<map>   //header file to include map
using namespace std;

int main(){
    map<int,int>inventory;   // declaring map

    inventory[5001]=20;    // inserting values intio the map
    inventory[5003]=15;
    inventory[5002]=30;
    inventory[5001]=25;
    inventory[5004]=10;

    for(auto x : inventory){    // displaying the product id and quantity, (map does not allows indexing) , ie initial inventory
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
  
    if(inventory.count(5002)){
        cout << "5002 exists";
    }else{
        cout << "5002 does not exists";
    }
    cout << endl;

    inventory[5003]=40;    // updating the quantity(value) of the product id(key) to 40 from 15

    inventory.erase(5004);   // removing the element with product id 5004

    for(auto x :inventory){     // displaying the updated inventory
        cout << x.first << " " <<x.second << " ";
    }
    cout << endl;

    cout << inventory.size();   // displaying the size of the inventory

    return 0;
}


/*
========================================================
                    MAP — SUMMARY
========================================================

- map stores data in KEY → VALUE form.

Syntax:
    map<int, string> mp;

- Keys must be UNIQUE.
- Values can be DUPLICATE.
- Keys are automatically stored in SORTED ORDER.
- map does NOT support index-based access.
- Access elements using their KEY.

Example:
    map<int, string> student;

    student[101] = "CSE";
    student[102] = "AIML";

Here:
    101 → CSE
    102 → AIML

- If an existing key is used, its value is UPDATED.

    student[101] = "ECE";

- If a new key is used, a new key-value pair is CREATED.

Important functions:

    mp.size()        → returns number of elements
    mp.empty()       → checks whether map is empty
    mp.find(key)     → searches for a key
    mp.count(key)    → returns 1 if key exists, otherwise 0
    mp.erase(key)    → removes the key-value pair
    mp.clear()       → removes all elements

Traversal:

    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    x.first  → KEY
    x.second → VALUE

Important:
- map stores keys in sorted order.
- Duplicate keys are NOT allowed.
- Duplicate values ARE allowed.
- map uses key-based access, not index-based access.

Time Complexity:
    Search   → O(log n)
    Insert   → O(log n)
    Erase    → O(log n)

========================================================
*/

