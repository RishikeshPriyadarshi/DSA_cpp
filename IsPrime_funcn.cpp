#include<iostream>
using namespace std;

//1...PRIME NO
//0...Not a PRIME NO

bool isPrime(int n){
    for(int i=2;i<n;i++){
        
        //divide hogya hai not a prime number
        if(n%i==0){
            return 0;
        }
    }

    return 1;

}

int main(){

    int n;
    cin>>n;

   if(isPrime(n)){
    cout<<"is a prime no."<<endl;
    cout<<"not a prime no."<<endl;

    return 0;

    
   }

}            
