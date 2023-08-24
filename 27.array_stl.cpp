#include<iostream>
#include<array>

using namespace std;

int main(){

    int basic[3]={1,2,3};

    array<int,4> a={1,2,3,4};
    //the diffrence between these 2 array is this that 
    //the latter array which is STL,its implementation is same
    //as the upper/basic array..I.E implementation of array STL
    //happens with fixed size static  array..


    int size=a.size();
    
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index->"<<a.at(2)<<endl;
    cout<<"Empty or not->"<<a.empty()<<endl;


    cout<<"First element"<<a.front()<<endl;
    cout<<"Last element"<<a.back()<<endl;

}