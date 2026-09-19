#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>student;

    student[101]=85;
    student[105]=95;
    student[103]=78;
    student[101]=95;
    student[110]=88;
    student[107]=91;

    for (auto x : student){
    cout << x.first << " " << x.second <<endl;
}
cout << endl;

cout << student.size();
cout << endl;
if(student.find(103)!=student.end()){
    cout << "103 exists";
}else{
    cout << "103 doesnt exist";
}
cout << endl;

student[105]=96;

student.erase(110);

for(auto x : student){
    cout << x.first << " " << x.second <<endl;
}

 return 0;
}

