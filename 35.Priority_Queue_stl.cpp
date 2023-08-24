/*
PRIORITY QUEUE means we made up a such queue whose
First Element will always be greatest

we r talking about  MAXHEAP,this priority queue relates with max heap

NOTE:The default PRIORITY-QUEUE is MAX-HEAP

we can convert it to Mean-Heap too..

>>>whenever we put the elements in the PRIORITY-QUEUE
we have entered the data,when we will start taking out
we will take out Maximum element..

so we have only two ways if we r making MAX HEAP then we
will be taking out maximum element
if we r making MIN HEAP then we will taking out min element

*/

#include<iostream>
#include<queue>

using namespace std;

int main(){


    //for max heap
    priority_queue<int> maxi;//when we intalize like this then
    //this is based on max heap...means whenever we will
    //fetch element,then that will always be greatest element

    
    //for min heap
    priority_queue<int,vector<int>,greater<int>> mini;


    //pushing the data
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size->"<<maxi.size()<<endl;

    //we will be printing the data which have pushed
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;


    //pushing the data in maxi

    mini.push(4);
    mini.push(9);
    mini.push(0);
    mini.push(3);

    //printing the data which we have pushed in the mini
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();

    }cout<<endl;

    //check whether it is empty or not

    cout<<"Emty or not :"<<mini.empty()<<endl;
     

}