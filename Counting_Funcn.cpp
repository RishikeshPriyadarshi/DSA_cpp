#include<iostream>
using namespace std;
//in this case our function need not to return anything so we will use void
//keyword as return type

//Function Signature
void printCounting(int n){

    //Function Body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }

    cout<<endl;


}

int main(){

    int n;
    cin>>n;

    
    //function call
    printCounting(n);

    return 0;


}