//In case of empty class the size of object will be 1.
//In Empty class there is No-Property

//The answr will be 1 because,there is no property for its
//rentification, for our identification it ill give 1 byte

#include<iostream>
using namespace std;

class Hero{

    //no property
    //i.e. empty class 
    //then size of Object=?


};

int main(){

    //Creation of Object...>Object is instance of class
    Hero h1;

    cout<<"size: "<<sizeof(h1)<<endl;

    return 0;

}