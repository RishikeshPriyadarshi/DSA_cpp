#include<iostream>
using namespace std;

int main(){

    int num=5;
    int a=num;
    cout<<" a before : "<<num<<endl;
    a++;
    cout<<" a after : "<<num<<endl;

    int *p=&num;
    cout<<num<<endl;
    (*p)++;
    cout<<"before : "<<num<<endl;

    (*p)=(*p)*2;
    cout<<"after : "<<num<<endl;

    //Copying one pointer to another
    int *q=p;
    cout<<p<<" : -address : "<<q<<endl;
    cout<<*p<<" : -value : "<<*q<<endl;

    return 0;


}