/*
 If we want to access the property(or Data  members) , 
 then we can do it by using Dot-Operator(.)

*/


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
    Hero ramesh;

    //Accessing the property using dot(.) Operator
    cout<<" health is: "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;
    //these will give error beacuse we r acessin Private Member
    

    //cout<<"size : "<<sizeof(h1)<<endl;

    return 0;
}