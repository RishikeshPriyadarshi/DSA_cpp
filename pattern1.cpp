#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;//it is for row
    while(i<=n)
    {
        int j=1;//it will print value of columns
        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}