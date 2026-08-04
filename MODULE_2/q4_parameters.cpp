#include <iostream>
using namespace std;

void country(string country_name){
    cout<< "Country : "<<country_name<<endl;
}

int main(){
    country("India");
    country("Japan");
    country("Canada");

    return 0;
}