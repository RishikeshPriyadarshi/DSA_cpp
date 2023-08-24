#include<iostream>
using namespace std;

int main()
{
    float fh,cel;
    cout<<"ENter the temprature celcius :"<<endl;
    cin>>cel;

    fh=(9.0/5.0)*cel+32;
    cout<<"Temprature in fahrenheit :"<<fh<<endl;

    return 0;
}