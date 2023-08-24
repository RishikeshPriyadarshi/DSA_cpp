/*
cin always stops the execution when we give it space,tab, newline
so when we i/p our name for example rishi kumar it will print only rishi
*/

#include<iostream>

using namespace std;

int main(){

    char name[20];

    cout<<"Enter your name:"<<endl;
    cin>>name;
    name[2]='\0';//null charcter after 2nd index of name
    //i.e. after ri there is null character(\0) so it will print ri


    cout<<"Your name is :";
    cout<<name<<endl;
}

//NOTE:So even if we have multiple null characters we(execution) will stop when
//the null character(\0) is encountered....
