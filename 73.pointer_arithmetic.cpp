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

    //important Concept ... Pointer Arithmetic
    int i=3;
    int *t=&i;
    //cout<<*t++<<endl;//this will not produce any problem

    //but we will write Quality code using bracket
    cout<<(*t)++<<endl;//it means *t=*t+1;

    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t : "<<t<< endl;
    t=t+1;//it will take 4-byte address so before it was 100,after that it will take 104
    
    cout<<"after t : "<<t<<endl;


    return 0;


}