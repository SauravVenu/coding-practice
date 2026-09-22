#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int key,value;

    unordered_map<int,int>frequency;
    cout << "enter the numbers : ";
    for(int i=0;i<8;i++){
        cin >> key;
        frequency[key]++;    // increasing the frequency of key by 1 , if its entered twice the frequenxy of that particular number will be 2 , by default the value will be 0
    }

    for (auto x : frequency){
        cout << x.first << " " << x.second<< endl;
    }
    cout << endl;

    if(frequency.find(5)!=frequency.end()){
        cout << "5 exists" << endl;
    }else{
        cout << "5 doesnot exist" << endl;
    }

    cout << frequency.size();

    return 0;
}

/*
if i want to enter both key and value , then i want to find the frequency , then use pair inside unordered list
 #include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int, pair<int,int>> mp;

    int key, value;

    for(int i = 0; i < 5; i++){

        cin >> key >> value;

        mp[key].first = value;   // store/update value
        mp[key].second++;        // increase frequency
    }

    for(auto x : mp){
        cout << x.first << " "
             << x.second.first << " "
             << x.second.second << endl;
    }

    return 0;
}
*/


/*
========================================================
                UNORDERED_MAP — SUMMARY
========================================================

- unordered_map stores data in KEY → VALUE form.

Syntax:
    unordered_map<int, string> mp;

- Keys must be UNIQUE.
- Values can be DUPLICATE.
- There is NO GUARANTEED ORDER of elements.
- unordered_map does NOT support index-based access.
- It uses HASHING internally.
- Access elements using their KEY.

Example:
    unordered_map<int, string> student;

    student[101] = "CSE";
    student[102] = "AIML";

Here:
    101 → CSE
    102 → AIML

- If an existing key is used, its value is UPDATED.

    student[102] = "ECE";

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
- unordered_map has NO guaranteed ordering.
- Duplicate keys are NOT allowed.
- Duplicate values ARE allowed.
- It uses KEY-BASED access.
- Average search, insertion and deletion are O(1).

Can also store a pair as the VALUE:

    unordered_map<int, pair<int,int>> mp;

This represents:

    KEY → {VALUE, FREQUENCY}

Example:

    mp[101] = {85, 3};

    mp[101].first  → VALUE
    mp[101].second → FREQUENCY

Time Complexity (Average):
    Search   → O(1)
    Insert   → O(1)
    Erase    → O(1)

========================================================
*/

