#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a = cin.get();
    cout<<"value of a is :"<< a <<endl;
}

// when we give the input 1 2 in terminal it gives output why so?
//Because cin.get() takes input in form of characters 
//it took '1' as a character, but we are assigning this value to an interger
//so that is why it printed ASCII value of the character


//after running the program when we enter SPACE as input we get output 32

//when we enter ENTER as input we get output 10

//when we enter TAB as input we get output 9

//all these values in output is mapped in ASCII table..