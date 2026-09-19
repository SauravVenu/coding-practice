#include<iostream>
#include<map>   //header file to include map
using namespace std;

int main(){
    map<int,int>inventory;   // declaring map

    inventory[5001]=20;    // inserting values intio the map
    inventory[5003]=15;
    inventory[5002]=30;
    inventory[5001]=25;
    inventory[5004]=10;

    for(auto x : inventory){    // displaying the product id and quantity, (map does not allows indexing) , ie initial inventory
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
  
    if(inventory.count(5002)){
        cout << "5002 exists";
    }else{
        cout << "5002 does not exists";
    }
    cout << endl;

    inventory[5003]=40;    // updating the quantity(value) of the product id(key) to 40 from 15

    inventory.erase(5004);   // removing the element with product id 5004

    for(auto x :inventory){     // displaying the updated inventory
        cout << x.first << " " <<x.second << " ";
    }
    cout << endl;

    cout << inventory.size();   // displaying the size of the inventory
}

