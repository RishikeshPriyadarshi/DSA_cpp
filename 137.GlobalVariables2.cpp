
//wrong way
#include<iostream>
using namespace std;

void a(int i){//This is wrong because we have created the copy herew,we have
              // not share, on particular memory space we have made a copy
              // we have passed 'i' as "pass by value"..
    cout<<i<<endl;

}

void b(){

}

int main(){

    int i=5;
    a(i);

}
