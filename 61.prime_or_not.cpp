#include<iostream>
using namespace std;

bool isPrime(int n){

    if(n<=1){//this is base case for 1 then it will not show 1 as prime no.
        return false;
    }


    for(int i=2;i<n;i++){//here we r entering the loop n-2 times so T.C O(n)
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin>>n;
    
    if(isPrime(n)){
        cout<<"it is a prime numer "<<endl;
    }
    else{
        cout<<"it is not a prime number "<<endl;
    }

    return 0;

}
