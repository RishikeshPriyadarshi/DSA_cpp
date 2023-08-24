#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n; 

    int ans=0;
    int i=0;
    while(n!=0){
       int bit=n&1;//to find the bit  whether it is 0 or 1
    

        ans=(bit*pow(10,i))+ans;//For reversing the number

        n=n>>1;//for right shift

        i++;


        
    }

    cout<<"Answer is "<<ans<<endl;
}

