#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    int num;

    cout << "enter 8 integers : ";
    for(int i=0;i<8;i++){
        cin >> num;
        v.push_back(num);
    }
    cout << " orginal vector : ";
    for(int x :v){
        cout << x <<" ";
    }
    cout << endl;

    cout <<"reversed vector : ";
    reverse(v.begin(),v.end());
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    cout << endl;

    vector<int>v2={10,20,30,40,50,60,70,80};
    cout << " second vector : ";
    for (int x : v2){
        cout  << x << " ";
    }
    cout << endl;

    reverse(v2.begin()+2,v2.begin()+6);
    cout << " after partial vector : ";
     for (int x : v2){
        cout  << x << " ";
    }

    return 0;
}


/*
TOPIC: reverse()

1. PURPOSE:
   reverse() reverses the order of elements in a range.

2. HEADER FILE:
   #include <algorithm>

3. SYNTAX:
   reverse(start, end);

4. FOR A VECTOR:
   reverse(v.begin(), v.end());

5. IMPORTANT:
   reverse() does NOT sort the elements.
   It simply reverses their current order.

   Example:
   Original:  10 5 30 2 20
   Reversed:  20 2 30 5 10

6. begin():
   v.begin() refers to the first element.

7. end():
   v.end() represents the position after the last element.

8. RANGE:
   reverse(v.begin(), v.end());
   reverses the complete vector.

9. PARTIAL RANGE:
   reverse(v.begin() + start, v.begin() + end);
   reverses only the selected range.

   The start position is included.
   The end position is excluded.

10. ORIGINAL VECTOR:
    reverse() modifies the original vector directly.
    It does not create a new vector.

11. STL ALGORITHM:
    reverse() is an algorithmic function.

    Use:
        reverse(v.begin(), v.end());

    NOT:
        v.reverse();

12. DIFFERENCE FROM sort():
    sort(v.begin(), v.end());
        → arranges elements according to sorting order.

    reverse(v.begin(), v.end());
        → simply reverses the existing order.

13. TIME COMPLEXITY:
    O(n)

14. MAIN IDEA:
    First element ↔ last element
    Second element ↔ second-last element
    and so on.
*/