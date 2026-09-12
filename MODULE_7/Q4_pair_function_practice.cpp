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