#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=2;


    int sum=0;



    while(i<=n)
    {
        sum+=i;
        i+=2;//i=i+2

    }

    cout<<"value of sum is:"<<sum<<endl;


}