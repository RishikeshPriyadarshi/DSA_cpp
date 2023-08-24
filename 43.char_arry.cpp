#include<iostream>

using namespace std;

int main(){

    char name[20];

    cout<<"Enter your name: "<<endl;
    cin>>name;//cin always stops the execution when we give it space,tab, newline
    //so when we i/p our name for example rishi kumar it will print only rishi

    cout<<"Your name is: ";
    cout<<name<<endl;
}