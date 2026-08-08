#include <iostream>
using namespace std;

void increaseMarks(int &marks){
    marks=marks+10;
    cout << " Inside Function : "<<marks <<endl;
}

int main(){
    int marks = 75;
    increaseMarks(marks);
    cout << " Inside Main : "<< marks;
    return 0;
}