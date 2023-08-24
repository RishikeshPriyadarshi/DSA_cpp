#include<iostream>
using namespace std;

void update(int **p2){

    *p2=*p2+1;
    

}
int main(){

    int i=5;
    int *p=&i;
    int **p2=&p;

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