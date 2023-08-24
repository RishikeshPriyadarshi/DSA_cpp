#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==0)
    return 1;//in base case writing return is MANDATATORY  

    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}