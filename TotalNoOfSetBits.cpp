//using brute force method

#include<iostream>
using namespace std;

//function to caluculate the number of set bits

int countBits(int n){
    int count=0;

    while(n){
        count+=n&1;

        n>>=1;;
    
    }

    return count;
}
int main(){
    int n;
    n=15;
    cout<<"the number of bits:"<<countBits(n);
    return 0;
}