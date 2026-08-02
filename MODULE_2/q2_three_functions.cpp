#include <iostream>
using  namespace std;

void welcome(){
    cout<< "*****************"<< endl;
    
    cout<< "Welcome to SRMIST"<< endl;

    cout<< "*****************"<< endl;
}

void about(){
 cout<< "Learning C++ Fuctions"<< endl;
}

void goodbye(){
    cout<< "Thank You"<<endl;
    cout<< "Visit again";
}

int main(){

 welcome();
 about();
 goodbye();

 return 0;
}