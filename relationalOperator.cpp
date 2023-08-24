#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int b=3;

    bool first = (a==b);
    cout<<first<<endl;//we will get output 0 which means false i.e. a is not equal to 0


    bool second =(a>b);
    cout<<second<<endl;

    bool third=(a<b);
    cout<<third<<endl;

    bool fourth = (a>=b);
    cout<<fourth<<endl;

    bool fifth =(a<=b);
    cout<<fifth<<endl;

    bool sixth =(a!=b);
    cout<<sixth<<endl;


}