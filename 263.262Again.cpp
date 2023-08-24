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


void insertAtPosition(Node* &head, int position, int d){

    //For Traversing
    Node* temp = head;

    int cnt =1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
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


    insertAtPosition(head,3,22);
    print(head);



}