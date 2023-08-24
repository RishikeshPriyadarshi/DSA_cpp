/*
 Here we will Insert the Element at "LAST Again"
  & then will "Update The Tail "
*/
#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    //pointer
    Node* next;

    //Constructor
    Node(int data){
        this->data =data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //Creation of new Node
    Node* temp = new Node(d);

    //2nd step
    temp->next = head;

    //3rd step
    head = temp;
}

void insertAtTail(Node* &tail, int d){

    //Creation of new Node
    Node* temp = new Node(d);
    
    // 2nd Step
    tail->next = temp;
    tail = tail->next;

}


void insertAtPosition(Node* &tail,Node* &head, int position, int d){

    //yaha pe humne starting 1st posn se kari hai
    //or insert ke liye hamesa previous node chaiye
    //so
    //agr hame pehli posn pe insert krna hai
    //to insertAtHead call krdo or head pass krdo

    //INSERTION at "START"

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    //ye condn humne isilye use nahi kiya kyoki len nahi pata  
    /*
    //Insertion at "Tail" and Updation of "Tail"
    //agr hame length pata hota
                             //pr hame length nahi pata
    if(len == position-1){
        insertAtTail(tail,d);
    }

    */

    //For Traversing
    Node* temp = head;

    int cnt =1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }


    //"ACCORDING TO QUESTION"

    //Inserting at last positin
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //Creating Node for "d"
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;


}

void print(Node* &head){

    //node fo traverse
    Node* temp = head;

    while(temp != NULL){

        //printing the value of temp
        cout<<temp->data<<" ";

        //Increasin the value of temp it reaches NULL
        temp = temp->next;

    }

    cout<<endl;
}

int main(){

    //creating Object(Node) in Heap
    Node* node1 = new Node(10);

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;


    //head pointed to node1
    Node* head = node1;


    //tail pointed to node1
    Node* tail = node1;
    print(head);


    //Insertion

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

   /*
    insertAtPosition(head,3,22);
    print(head);


    //Insertion at 1st posiition
    insertAtPosition(head,1,23);
    print(head);

    */


    //Updating The Tail
    insertAtPosition(tail,head,4,22);
    print(head);


    //For verification of head and tail
    cout<<"head"<<head->data<<endl;

    cout<<"tail"<<tail->data<<endl;

    return 0;


}