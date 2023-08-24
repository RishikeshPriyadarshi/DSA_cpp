#include<iostream>
using namespace std;
int main()
{
    char ch=123456;
    cout<<ch<<endl;
}

//on running this code it gave us warning that our 123456 will be trated as 64,that is the largest value which can
//be stored in the char 
//and this 64 is mapped to @ as our output


//So we understand if we will try to assign some big values _ of any char variable,
//only its last bit values will be assigned and then specific mapped character will  be printed