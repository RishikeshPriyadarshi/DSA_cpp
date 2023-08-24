#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    p=p+1;

    cout<<"inside( the real update) : "<<p<<endl;
}


int main(){

    int value=5;
    int *p=&value;

    print(p);


    cout<<"Before Update "<<p<<endl;

    update(p);
    cout<<"After Update"<<p<<endl;
    return 0;
}
