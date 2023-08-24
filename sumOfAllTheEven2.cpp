#include<iostream>
using namespace std;

int main()
{
    int i=0, sum=0, n;

    cin>>n;

    while(i<=n)
    {
        if(i%2==0)
        sum=sum+i;
        i++;
    }

    cout<<"value of sum:"<<sum<<endl;
}