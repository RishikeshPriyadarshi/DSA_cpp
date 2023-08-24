/*
 we r solving this question for '2^n'
                i.e. 2^n=2*2^n-1
                     f(n)=2*f(n-1)
*/

#include<iostream>
using namespace std;

int power(int n){

    //base case---ye kehta hai if any no. power is 0 ans will be 1
    if(n==0)
    return 1;

    //recursive relation
    
    /*
    int smallerproblem= power(n-1);

    int biggerproblem= 2*smallerproblem;

    return biggerproblem;

    */

    //the above can be written in shorter way
    return 2*power(n-1);
}

int main(){

    int n;
    cin>>n;

    int ans=power(n);

    cout<<ans<<endl;

    return 0;

}