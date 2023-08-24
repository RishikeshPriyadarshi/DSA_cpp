/*
  Q. i/p- a=3 ,b=2

    o/p- 3^2=9

*/
#include <iostream>
using namespace std;

int power(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // Recursive call
    int ans = power(a, b / 2); // i.e a^b/2

    // if b is even then
    if (b % 2 == 0)
    {
        return ans * ans; // ans=a^b/2 so ans*ans= a^b/2*a^b/2
    }
    // if b is odd
    else
    {

        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "answer is " << ans << endl;
}
