/*
i/p-rishi

o/p-ihsir
*/

#include<iostream>
using namespace std;

void reverse(char name[], int n){

    int start=0;
    int end=n-1;

    while(start<end){

        swap(name[start++],name[end--]);

    }

}

int getLength(char name[]){

    int count=0;

    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}

int main(){

    char name[20];

    cout<<"Enter Your name :";
    cin>>name;

    cout<<"Your name is :";
    cout<<name<<endl;

    int len=getLength(name);
    cout<<"Length :"<<len<<endl;

    reverse(name,len);\
    cout<<"your name is :"<<name<<endl;

    return 0;
}

