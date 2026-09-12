#include<iostream>
#include<utility> // header file to include pairs
#include<vector>  // header to include vector
using namespace std;

pair<int,int> calculate(int a, int b){  // creates a function which will return a pair
        int sum = a+b;   // calculate sum of the numbers given as arguments and stores it in sum
        int product  = a*b;   // calculate product of two numbers given as the arguments and stores it in product
        return {sum,product};  // return the results sum and product as pairs
    }

int main(){
    pair<int,int>result = calculate(5,10);  //calls the function and stores the result as a pair in the result variable
    cout << "Sum : "<< result.first << endl;  //access the first element of the result which is sum 
    cout << "Product : "<< result.second;   // access the second element of result which is product
    return 0;
}




/*
==================== PAIR SUMMARY ====================

1. PAIR
   - pair is used to store exactly two related values together.
   - The two values can have the same or different data types.

2. CREATING A PAIR
   pair<int,int> p = {10,20};
   pair<int,string> p = {101,"Sourav"};

3. ACCESSING VALUES
   p.first  -> accesses the first value
   p.second -> accesses the second value

4. MODIFYING VALUES
   p.first = 50;
   p.second = 100;

5. make_pair()
   - Creates a pair and automatically deduces the types.

   auto p = make_pair(10,20);

6. VECTOR OF PAIRS
   vector<pair<int,int>> v;

   - Each vector element contains one pair.
   - Access using:
       v[i].first
       v[i].second

7. PAIR WITH DIFFERENT TYPES
   pair<int,string> student = {101,"Sourav"};

   first  -> int
   second -> string

8. NESTED PAIR
   pair<int,pair<int,int>> p = {5,{10,15}};

   p.first
   p.second.first
   p.second.second

9. PAIR ASSIGNMENT
   pair<int,int> p1 = {10,20};
   pair<int,int> p2;

   p2 = p1;

   - Both first and second values are copied.

10. PAIR WITH FUNCTIONS
    - A function can receive a pair as an argument.
    - A function can also return a pair.

    Example:
    pair<int,int> calculate(int a,int b)

11. PRACTICAL DSA USE
    - A pair can represent two related pieces of information.
    - Example:
        {index, value}
        {value, index}
        {roll number, marks}

12. IMPORTANT POINT
    - first and second do not have fixed meanings.
    - Their meaning depends on how the programmer defines the pair.

=======================================================
*/