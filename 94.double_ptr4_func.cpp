#include<iostream>
using namespace std;

void update(int **p){
    p=p+1;
    //kuch change hoga isse ? ....>No Change
    /*
     >>There will not be any change with p=p+1; because the value is passed with the 
       help of pointer through argument/function 
       so when we will come from update funcn to main funcn,we will not get any change
       the value of before and after will remain same...
    */


   // *p=*p+1;
    //kuch change hoga isse ?...>Yes

    //**p=**p+1;
    //kuch chnge hoga isse?.....>Yes

}

int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;

/*
    cout<<endl<<"Sab sahi chal raha hai :"<<endl<<endl;   
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
    

    cout<<&p<<endl;
    cout<<p2<<endl;

    */
   cout<<endl<<endl;

   cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<p2<<endl;

   update(p2);

   cout<<endl<<endl;

   cout<<"after "<<i<<endl;
   cout<<"affter "<<p<<endl;
   cout<<"after "<<p2<<endl;


    return 0;




    
}