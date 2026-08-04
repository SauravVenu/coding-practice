#include <iostream>
using namespace std;

void student(string name , int age){
    cout<< "Name : "<< name <<endl;
    cout<< "Age : "<< age <<endl;
    cout<<endl;
}

int main(){
    student("Sourav",20);
    student("Rahul",19);
    student("Anjali",21);

    return 0;
}