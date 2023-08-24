#include<iostream>

using namespace std;

int main(){

    //This is bad prctice as pointer to int is created and it is pointing to some garbage value
     int *p;

    cout<<*p<<endl;

    return 0;


}