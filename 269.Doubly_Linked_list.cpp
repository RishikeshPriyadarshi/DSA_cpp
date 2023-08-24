#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    //pointers
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data = d;
        this->prev =NULL;
        this->next = NULL;

    }
};

//Traversing Linked-List
void print(Node* head){

    Node* temp =head;

    while(temp != NULL){
        cout<<temp->data<<" ";

        temp= temp->next;

    }

    cout<<endl;
}

//creating the fucn which gives length of linked list
int getLength(Node* head){

    int len=0;


    Node* temp = head;

    while(temp != NULL){

        len++;

        
        temp=temp->next;
    }

    return len;
}


void insertAtHead(Node* &head,int d){

    Node* temp =new Node(d);

    temp->next = head;

    head->prev =temp;

    head =temp;

}


void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);

    tail->next=temp;
    temp->prev =tail;

    tail = temp;
}

//For Inserting The Element At Any Position
void insertAtPosition(Node* &tail,Node* &head, int position ,int d){

    //if we hv to insert at start then,
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp =head; //made a new node temp pointing to head

    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //if we hv to Insert at Last-position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;

    }

   
   //Creating node for d   //If we hv to Insert at Miiddle

   Node* nodeToInsert = new Node(d);//ist step is creatiing NODE


   //temp is 1st node (left node),
   //nodeToinsert is a node which we hv to insert in Mid
   //nodeToInsert pointing to null in both dirn let or ryt at first
   //Right side is  temp->next (NOde)

   /*
     1st-Step: Create a Node

     2nd-Step: nodeToInsert->next = temp->next

     3rd-Step: temp->next->prev = nodeToInser

     4th-step : temp->next = nodeToInsert


     5th-Step : nodeToInsert->prev = temp

   */

  nodeToInsert->next = temp->next;

  temp->next->prev = nodeToInsert;

  temp->next = nodeToInsert;

  nodeToInsert->prev = temp;


 

}


int main(){

    Node* node1 = new Node(10);

    Node* head = node1;

    Node*tail =node1;

    print(head);


    //print in length
    //cout<<getLength(head)<<endl;

    //Insertion
    
    //Head
    insertAtHead(head,11);
    print(head);
    
    insertAtHead(head,13);
    print(head);

    insertAtHead(head,8);
    print(head);

    //Tail
    insertAtTail(tail,25);
    print(head);


    //At any Position
    //
    insertAtPosition(tail,head,2,100);
    print(head);


    insertAtPosition(tail,head,1,103);
    print(head);

    //insertAtPosition(tail,head,8,102);
    //print(head);

    return 0;
}