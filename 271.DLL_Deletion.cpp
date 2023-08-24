
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

    //Destructor

    ~Node(){

        int val = this->data;

        if(next!=NULL){

            delete next;
            next = NULL;
        }

        cout<<"Memory freed for node with data"<<val<<endl;
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


void insertAtHead(Node* &tail, Node* &head, int d){

    //Empty-List
    if(head==NULL){

        Node* temp = new Node(d);
        head = temp;
        tail=temp;



    }
    else{
        Node* temp =new Node(d);

        temp->next = head;

        head->prev =temp;

        head =temp;
    }

    

}


void insertAtTail(Node* &tail, Node* & head, int d){
    
    //Empty-List
    if(tail==NULL){

        Node* temp = new Node(d);
        tail = temp;
        head= temp;

    }

    else{

        Node* temp = new Node(d);

        tail->next=temp;
        temp->prev =tail;

        tail = temp;
    }

   
}

//For Inserting The Element At Any Position
void insertAtPosition(Node* &tail,Node* &head, int position ,int d){

    //if we hv to insert at start then,
    if(position==1){
        insertAtHead(tail,head,d);
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
        insertAtTail(tail,head,d);
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

//FOR-DELETION
/*
   1st Step
   --------
   temp->next->prev =NULL

   2nd-Step
   -----------
   temp->next = NULL

   3rd step
   ---------
   head = temp->next

   4th step
   ---------
   free the memory

*/

void deleteNode(int position, Node* &head){

    //Deleting first or start Node

    if(position==1){

        Node* temp =head;

        temp->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;

        delete temp;
    }

    else{
        //Deleting any Middle or Last Node

        Node* curr = head;
        Node* prev = NULL;


        int cnt = 1;
        while(cnt<position){

            prev=curr;
            curr=curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next= NULL;


        delete curr;
    }
}


int main(){

   // Node* node1 = new Node(10);

    Node* head = NULL;

    Node*tail =NULL;

    print(head);


    //print in length
    //cout<<getLength(head)<<endl;

    //Insertion
    
    //Head
    insertAtHead(tail,head,11);
    print(head);
    
    insertAtHead(tail,head,13);
    print(head);

    insertAtHead(tail,head,8);
    print(head);

    //Tail
    insertAtTail(tail,head,25);
    print(head);


    //At any Position
    //
    insertAtPosition(tail,head,2,100);
    print(head);


    insertAtPosition(tail,head,1,103);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,7,102);
    print(head);




    //DELETION

    deleteNode(6,head);
    print(head);
    
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


    return 0;
}