#include<iostream>

using namespace std;

int main(){

    int a[20]={1,2,3,5};
    //output will be same in all these 3 cases..i.e. same address
    cout<<"-->"<<&a<<endl<<endl;
   // cout<<&a[0]<<endl;
   // cout<<a<<endl;

   int *p=&a[0];
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<"-->"<<&p<<endl;

     


    return 0;
}