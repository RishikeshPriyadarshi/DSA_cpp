/*
    NOTE: in Pass By Reference "no new memory is created"


          in Pass By Reference "a copy is created"
*/


#include<iostream>
using namespace std;

void update2(int& n){//pass by reference
    n++;
}

void update(int n){//pass by value
    n++;
}

int main(){
    int n=5;
    cout<<"Before"<<n<<endl;

    update2(n);
    cout<<"after"<<n<<endl;


}


/*
  
  In "Pass By Value", when a funcn calls another funcn by this method
  ,an copy of parameter is passed, a new memory is allocated,
  and new copy will fill this memory..



  In "Pass By Refernce", when a funcn pass parameter to another funcn 
  where we take it as refernce variable, memory location remains the 
  same , same memory will be used but we will give it an another name..

*/