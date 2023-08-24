#include<iostream>
using namespace std;

int main(){
    int first=100;
    int *p=&first;
    int **q=&p;
    int second=++(**q);
    int *r=*q;///important 
    ++(*r);
    cout<<first<<" "<<second<<endl;



    return 0;
}

//*q means content present on address p
//*r also pointing to content present on address r

