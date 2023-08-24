//How to Pass Pointer in a function

#include<iostream>
using namespace std;

//makng the function  which will print the value
void print(int *p){

    cout<<*p<<endl;
}

int main(){

    int value=5;
    int*p=&value;

    print(p);

    return 0;

}