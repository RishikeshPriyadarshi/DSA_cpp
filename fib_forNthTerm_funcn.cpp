#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)//stopping condition
    return n;

    else{//rtecursive part
        return (fib(n-1)+fib(n-2));
    }
}

int main(){

    int n;
    cout<<"Enter the term which u  wnat to calculate"<<endl;
    cin>>n;
    int ans=fib(n);
    cout<<"Answer is "<<ans<<endl;
}