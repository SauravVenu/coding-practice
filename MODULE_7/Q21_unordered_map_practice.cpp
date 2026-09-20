#include<iostream>
#include<unordered_map>   //header file to include unordered map()
using namespace std;

int main(){
    unordered_map<int,string>student;  // declaring unordered map

    student[101]={"CSE"};      // giving values into the unordered map
    student[102]={"AIML"};
    student[103]={"ECE"};
    student[104]={"CSE"};
    student[105]={"MTECH"};

    for(auto x : student){      // diplaying the key and values in the initial unoredered map
        cout <<x.first << " " <<x.second << endl;
    }
    cout << endl;

    if(student.find(103)!=student.end()){    // chacking wheather 103 exists using find()
        cout << "103 exists";
    }else{
        cout << "103 does not exists";
    }
    cout << endl;

    student[102]="CSE";       // upading the value of the  key 102 from aiml to cse
    student.erase(105);       // removing an element from the unordered map with key = 105

      for(auto x : student){    // displaying the key and values in the updated  unordered map
        cout <<x.first << " " <<x.second << endl;
    }
    cout << endl;

    cout << student.size();    // displays the no . of elements in the unordered map

    return 0;
}