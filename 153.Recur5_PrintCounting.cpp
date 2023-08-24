/*
 means if we get input----> n=5
           then  output--->  5 4 3 2 1
*/

//Example of TAIL RECURSION

#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0){
        return ;
    }
    //Processing
    cout<<n<<endl;


    //now for recursive relation
    print(n-1);//This is tail recursion as R.R at end
}

int main(){

    int n;
    cin>>n;

    cout<<endl;

    print(n);
}