/*
 // we can do this I/P and O/P in same order,
     by taking "tail"...

     I/P - 10 , 20 , 30 , 40 

     O/P - 10 , 20 , 30 , 40

     Both r in Same Order  

     we will create a funcn:

     insertAtTail() ,which will always add
     new node after the ending node

     //tail --> It is pointer of Node-Type

       ye last node Darsheyga

*/ 

#include<iostream>
using namespace std;

class Node{

    public:

    int data;

    //Pointer
    Node* next;


    //Constructor
    Node(int data){

        this->data =data;

        this->next =NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //New Node Creation
    Node* temp =new Node(d);

    cout<<temp->next<<endl;
    //or
    //temp->next=head;

    head=temp;
    
}

void insertAtTail(Node* &tail, int d){

    //New Node Creation
    Node* temp =new Node(d);

    tail->next= temp;
    tail = tail->next;

    


}

void print(Node* &head){
    
    //New Node
    Node* temp = head;

    while(temp != NULL){

        //printing the value of temp
        cout<<temp->data<<endl;

        //temp ko end tk badhana hai jk tk lastt tk na pahuch jaye
        //NULL tk
        temp= temp->next;
    }

    cout<<endl;
}

int main(){

    //Creating Object(Node) in the HEAP
    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;

    //tail pointed to node1      //IMP
    Node* tail=node1;
    print(head);
   

   /*

    //Insert Kro
    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);
*/

   
   insertAtTail(tail,12);
   print(head);

   insertAtTail(tail,15);
   print(head);


    return 0;


}

