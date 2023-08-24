//Example of HEAD RECURSION

#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0){
        return ;
    }
    
    //now for recursive relation
    print(n-1);

    //PROCESSING
    cout<<n<<endl;//This is Head Recursion because processing at End
}
int main(){

    int n;
    cin>>n;

    cout<<endl;

    print(n);
}