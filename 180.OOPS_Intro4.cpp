//instead of making class in other file we can make it same file too

#include<iostream>
using namespace std;

class Hero{
 
    //Properties
    char name[100];
    int health;
    char level;
};

int main(){

    //Creation of Object
    Hero h1;

    cout<<"size : "<<sizeof(h1)<<endl;

    return 0;
}