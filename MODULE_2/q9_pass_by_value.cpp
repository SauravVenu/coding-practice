#include <iostream>
using namespace std;

void updateMarks(int marks){

 marks = 100;

cout << marks << endl;
}
int main(){
    int marks = 85;
    updateMarks(marks);
    cout<<marks<<endl;
}