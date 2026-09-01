#include<iostream>
#include<string>
using namespace std;

class Student{
   private:
      int age;
   ;
   public:
       string name;
       void setAge(int a){
        age=a;
       }
       void display(){
         cout <<"Name : "<< name <<endl;
         cout <<"Age : "<<age;
       }
};

int main(){
    Student s1;
    s1.name= "Saurav";
    s1.setAge(20);

    s1.display();
    return 0;
}