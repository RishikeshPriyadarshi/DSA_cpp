#include<iostream>
using namespace std;

int main(){
    int i=5;
    
    //create the variable
    int& j=i;

    cout<<" "<<j<<endl;
    cout<<" "<<i<<endl;
    i++;
    cout<<" "<<i<<endl;
    j++;
    cout<<" "<<i<<endl;

}
