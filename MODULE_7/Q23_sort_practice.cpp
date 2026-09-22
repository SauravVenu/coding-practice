#include<iostream>
#include<vector>      //header file used  to include vector
#include<algorithm>   //header filee used to include sort()
using namespace std;

int main(){
    int num;
    vector<int>v;
    cout << " enter 8 numbers : ";
    for(int i=0;i<8;i++){     // taking 8 inputs from the user
        cin >> num;    // user enters  the elements
        v.push_back(num);   //  elements are added at the end of the vector
    }
    cout << endl;
    cout << "origiinal vector : ";     
    for(int i=0; i <v.size();i++){    // displaying the original vector , we can either use for loop or range based for loop for dispalying the elemnents , since vector allows indexing
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "Assending : ";
    sort(v.begin(),v.end());   // sorting in assending order  , here sort() is a vector function like push_back(), erase(), etc, it is an algorithmic function , so we dont want to use "v." before sort()

    for(int x : v){     // for displaying the sorted vector , by default sort () will sorts the elements in asending order
        cout << x << " ";
    }
    cout << endl;
    
    sort(v.begin(),v.end(),greater<int>());   //greater<int> needs () because here we are creating comparison object.
    cout << "Desending : ";
    for(int x : v){   // displaying th elements
        cout << x << " ";
    }
    return 0;
}