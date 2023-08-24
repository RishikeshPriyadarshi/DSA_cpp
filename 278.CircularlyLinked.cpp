#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    //Pointer
    Node* next;


    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        
        int value = this->data;

        //Memory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is freed for Node with data"<< value<<endl;
    }


};

void insertAtHead(Node* &head, int d){

    //New Node Creation
    Node* temp = new Node(d);

    temp->next = head;

    head->prev = temp;

    head = temp;

}

void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);

    tail->next=temp;
    temp->prev =tail;

    tail = temp;
}

void print(Node* tail){

    Node* temp = tail;


    //empty list
    if(tail==NULL){
        
        cout<<"List is Empty "<<endl;
        return;
    }

    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;

    }while(tail != temp);

    cout<<endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail==NULL){
        cout<<"List is empty, pls check Again"<<endl;
        return;
    }

    else{

        //Non-Empty

        //Assuming the "Value" is present in the Linked List
        Node* prev = 
    }
}

