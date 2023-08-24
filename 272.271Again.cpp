#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    //ponter
    Node* next;

    Node* prev;

    //Consstructor
    Node(int d){

        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //Destructor
    ~Node(){

        int val = this->data;

        if(next != NULL){

            delete next;
            next = NULL;
        }

        cout<<"Memory freed wih data "<<val<<endl;
    }

};

//Traversing Linked-List
void print(Node* &head){

    Node* temp =head;

    while( temp != NULL){

        cout<<temp->data<<" ";

        temp= temp->next;

    }

    cout<<endl;

}

//Creating a Funcn hich gives length of L-List

int getLength(Node* &head){

    int len =0;

    Node* temp = head;

    while(temp != NULL){

        len++;

        temp= temp->next;
    }

    return len;
}


void insertAtHead(Node* &tail, Node* &head, int d){

    //Empty List
    if(head==NULL){

        Node* temp = new Node(d);

        head = temp;
        tail = temp;
    }

    else{

        Node* temp = new Node(d);

        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head, Node* & tail, int d){

    //Empty List
    if(tail == NULL){

        Node* temp = new Node(d);

        head = temp;//
        tail= temp;
    }

    else{

        Node* temp = new Node(d);

        tail->next = temp;
        temp->prev= tail;
        tail = temp;
    }
}

//For Inserting Element at any Position

void insertAtPosition(Node* &tail, Node* &head,int position, int d){

    //if we have to insert at start then,
    if(position==1){

        insertAtHead(tail,head,d);
        return;
    }

    
    //Making a new Node temp pointing to head
    Node* temp = head;

    int cnt =1;
    while(cnt<position-1){

        temp=temp->next;
        cnt++;
    }

    
    //If we hv to Insert at Last Position
    if(temp->next=NULL){

        insertAtTail(tail,head,d);
        return;
    }


    //If we hv to Insert at Middle

    //Creating node for d   
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


}

//For Deletion
void deleteNode(int position , Node* &head){

    //Deleting first or Start Node

    if(position==1){

        Node* temp = head;


        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }

    //Deleting any Middle or Last Node
    else{

        Node* curr = head;
        Node* prev = NULL;


        int cnt = 1;
        while(cnt<position){

            prev=curr;
            curr= curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

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