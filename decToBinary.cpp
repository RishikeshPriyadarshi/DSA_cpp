#include<iostream>
#include<math.h>
using namespace std;


int decToBinary(int n){
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    return ans;
} 

int main(){
    int n;
    cin>>n;
    if(n<0){
        //if number is negative
        n=n*(-1);
        int ans=decToBinary(n);

        //Find 2's compliment of the number


        //1's compliment

        int newans=(~ans);

        //2's compliment
        newans=newans+1;

        cout<<newans<<endl;
    }
    else{
        //if number is +ve
        int ans=decToBinary(n);
        cout<<ans<<endl;
    }


    }
