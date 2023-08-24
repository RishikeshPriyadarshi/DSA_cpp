#include <iostream>

using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{

    /*
        SUPPOSE if we r passing  the Pointer inside the Update method,then it won"t
        work if we play like this with pointer..
    */
    // p=p+1;
    //"cout<<inside(the real update) : "<<endl;


    //we can Update the Value
    *p=*p+1;
}

int main()
{
    int value = 5;

    int *p = &value;

   // print(p);

    cout << "Before : " << *p << endl;

    update(p);
    cout << "After : " << *p << endl;

    return 0;
}