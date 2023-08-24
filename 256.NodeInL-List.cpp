#include<iostream>
using namespace std;


class Node{

    public:
    
    int data;

    //pointer of node pointing to next address
    Node* next;
};


int main(){

    //creating the object in HEAP, Like this
    Node* node1= new Node();
    
    //printing the data 
    //and next node's Address value
    cout<<node1->data<<endl;

    cout<<node1->next<<endl;
}