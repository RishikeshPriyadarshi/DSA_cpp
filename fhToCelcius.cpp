#include<iostream>
using namespace std;

int main()
{
    float fh,cel;
    cout<<"please enter the the temprature in fahrenheit :"<<endl;
    cin>>fh;

    cel=(fh-32)*5/9;
    cout<<"Temprature in centigrade :"<<cel<<endl;

    return 0;
}