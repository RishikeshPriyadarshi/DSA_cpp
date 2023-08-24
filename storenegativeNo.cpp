/*
#include<iostream>
using namespace std;

int main()
{
    unsigned int a =-112;

    cout<< a <<endl;
}
*/

#include<iostream>
using namespace std;

int main()
{
    unsigned int a =-112;

    cout<< a <<endl;

}    
//if we will store -112 in unsigned, then we will get a very large number
//because compiler will try to print its 2's complement but since the value is unsigned.
//then it will print it as +ve integer which is very large in value