#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<" Source "<< src <<" destination "<< dest <<endl;

    //base case
    if(src == dest){
        cout<<"pahuch gya"<<endl;
        return;//return is mandatotry in base case

    }

    //Processing......>Ek step aage badh jao
   src++;

    //recursive call
    /*
      Lets understand what will happen in recursive call:

       whenever will take one step what will happen?
       >if we were standing ae 1 then we will reach  at 2,
        then 3, and so on....
        Current position is indicated by "src",
        it means we need to increment the src... i.e. src++ 
    */
   reachHome(src,dest);

      

}

int main(){

    int src=1;
    int dest=10;

    cout<<endl;

    reachHome(src,dest);
}

















































