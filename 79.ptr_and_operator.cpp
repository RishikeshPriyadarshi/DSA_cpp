#include<iostream>

using namespace std;

int main(){

    int a[20]={1,2,3,5};
    //output will be same in all these 3 cases..i.e. same address
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<a<<endl;

     



    return 0;
}