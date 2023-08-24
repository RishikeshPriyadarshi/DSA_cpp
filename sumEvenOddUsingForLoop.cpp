#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,eve=0,odd=0;
    cout<<"Enter any 10 numbers:"<<endl;

    for(i=0;i<10;i++)
    cin>>arr[i];

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            eve=eve+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    cout<<"sum of Even numbers="<<eve<<endl;
    cout<<"sum of Odd numbers="<<odd<<endl;
    return 0;

}