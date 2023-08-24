#include<iostream>
using namespace std;


class Node{

    public:
    
    int data;

    //pointer of node pointing to next address
    Node* next;


    //Now what we want is whenevr we write newNode,
    //we r able to create it
    //So we have written the "CONSTRUCTOR" here,
    Node(int data){
        this->data=data; //this->data is data of line 9
                         // and data is data of line 19

       this->next=NULL;                  
    }
};


int main(){

    //creating the object in HEAP, Like this
    Node* node1= new Node(10);
    
    //printing the data 
    //and next node's Address value
    cout<<node1->data<<endl;

    cout<<node1->next<<endl;

    return 0;
}

/*

"Whenever a new node is created , then CONSTRUCTOR will be Called"
  at line 18

  There we will "put the Data"
  and " put NULL in next String"


*/