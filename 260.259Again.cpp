/*
  //here we r doing this by taking "head"
                |
  Here the I/P - 10 , 20 , 30 , 40

          O/P - 40,  30  , 20 , 10

          Both r in reverse order


          we will create a funcn:

     insertAtHead() ,which will always add
     new node after the starting node


  // we can do this I/P and O/P in same order,
     by taking "tail"...

     I/P - 10 , 20 , 30 , 40 

     O/P - 10 , 20 , 30 , 40

     Both r in Same Order   
  

*/

#include<iostream>
using namespace std;

class Node{

    public:

    int data;

    //Pointer Creation
    Node* next;

    //Constructor
    Node(int data){

        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //New Node Creation
    Node* temp =new Node(d);

    //2nd Step
    temp->next= head;

    //3rd Step
    head=temp;
}

void print(Node* &head){

    //Creating new node
    Node* temp=head;

    while(temp != NULL){

        //
        cout<<temp->data<<endl;

        temp=temp->next;
    }

    cout<<endl;
}

int main(){

    //Creating Object(Node) in Heap
    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;


    //Head pointing to new node
    Node* head= node1;       
    print(head);

    //Insert Kro
    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);


    return 0;


}
