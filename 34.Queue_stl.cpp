/*
QUEUE, when we talk about Queue it means line
one who is at the front of line the TURN comes 1ST
which means 1ST IN 1ST OUT

*/

#include <iostream>
#include <queue>

using namespace std;
int main()
{

    queue<string> q;

    q.push("rishi");
    q.push("kesh");
    q.push("kumar");

    cout<<"Size before pop :"<<q.size()<<endl;

    cout << "First Element :" << q.front()<<endl;

    q.pop();
    cout<<"Element after poping 1st element :"<<q.front()<<endl;


    cout<<"size after pop :"<<q.size()<<endl;

    


}