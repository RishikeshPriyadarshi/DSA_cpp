#include<iostream>
using namespace std;

void update(int n){
    n++;
}

int main(){

    int n=5;

    cout<<"before"<<n<<endl;

    update(n);
    cout<<"after"<<n<<endl;

}

// in Output we will be getting same value before and after i.e.5
//because a copy of 'n' is created in update funcn ,
//it is passed as "call by value"...