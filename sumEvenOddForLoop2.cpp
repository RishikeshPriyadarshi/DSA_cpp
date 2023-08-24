#include<iostream>
using namespace std;

int main()
{
    int n,i,eve=0,odd=0;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter any "<<n<<"numbers:"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            eve+=arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    if(eve==0)
    {
        cout<<"Even number not found!"<<endl;
    }
    else
    {
        cout<<"sum of Even numbers ="<<endl;
    }
    if (odd==0)
    {
        cout<<"Odd number is not found!"<<endl;
    }
    else
    {
        cout<<"sum of odd numbers ="<<odd<<endl;
    }
    return 0;
}