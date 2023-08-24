#include<iostream>
using namespace std;
//will give output as 1 in case of odd
//will give output as 0 in case of even
bool isEven(int a){
    //odd
    if(a&1){
        return 0;

    }

    else{//even
        return 1;
    }

}

int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

    return 0;
}