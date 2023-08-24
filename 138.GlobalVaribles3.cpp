#include<iostream>
using namespace std;

void a(int& i){//if we want to share a value then we will make the
               //reference variable 
    cout<<i<<endl;

}

void b(int& i){
    cout<<i<<endl;
    

}
int main(){
    int i=5;

    a(i);

    b(i);

    return 0;
}

/*
  Means i  is created only once but it can be accessed by many funcns
memory block will be single, it will be created only once ,can be 
access by many functions
*/