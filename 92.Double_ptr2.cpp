#include<iostream>
using namespace std;

int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<endl<<"Sab sahi chal raha hai :"<<endl<<endl;

    cout<<"printing p :"<<p<<endl;
    cout<<"address of p is :"<<&p<<endl;

    cout<<*p2<<endl;


}