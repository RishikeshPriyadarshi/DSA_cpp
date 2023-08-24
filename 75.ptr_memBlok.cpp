#include<iostream>
using namespace std;

int main(){
    int arr[10]={23,122,41,67};

    cout<<"Value at memory blok 2 : "<<arr[2]<<endl;

    //we can write it in another way
    cout<<"Value at memory block 2 : "<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;

    return 0;
    
}