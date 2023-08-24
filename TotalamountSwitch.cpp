#include<iostream>
using namespace std;

int main(){
    int amt;
    int n1,n2,n3,n5,n10,n20,n50,n100,n500;
    n1=n2=n3=n5=n10=n20=n50=n100=n500=0;
    cout<<"pls enter th total amount to find the number of notes "<<endl;
    cin>>amt;

    switch(amt>=500){//switch contains expression integrals
        case 1:n500=amt/500;
        amt=amt-n500*500;
            break;
    }

    switch(amt>=100){
       case 1: n100=amt/100;//case contains int and char not float and string
        amt=amt-n100*100;
            break;
    }
    switch(amt>=50){
        case 1: n50=amt/50;
        amt=amt-n50*50;
            break;
    }

    switch(amt>=20){
        case 1: n20=amt/20 ;
        amt=amt-n20*20;
            break;
    }

    switch(amt>=10){
        n10=amt/10;
        amt=amt-n10*10;
            break;
    }
    cout<<"500= "<<n500<<endl;
    cout<<"100= "<<n100<<endl;
    cout<<"50= "<<n50<<endl;
    cout<<"20= "<<n20<<endl;
    cout<<"10= "<<n10<<endl;
}