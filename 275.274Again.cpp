#include<iostream>
using namespace std;

class Node{


    public:
    int data;

    //Pointers
    Node* next;
    Node* prev;


    //Constructor
    Node(int d){

        this->data = d;

        this->next = NULL;
        
    }

    //Destructor
    ~Node(){

        int val = this->data;

        if(next != NULL){

            delete next;
            next=NULL;
        }

        cout<<"Memory freed for node with data"<<val<<endl;
    }
};

void insertNode(Node* &tail,int element ,int d){

    //Assuming the element present in the list

    //Empty List
    if(tail==NULL){
        Node* newNode = new Node(d);

        tail = newNode;

        //making it circular
        newNode->next = newNode;
    }

    else{
        //Assuming the element is present in the list
        //Non-Empty List

            //making curr pointer & put in tail
        Node* curr = tail; 
        
        while(curr->data != element){

            curr = curr->next;
        }   

        //Loop ke bhar agye mtlb
        //element mil chuka hai or curr uske upr hai
        
        //i.e. element found -> curr is representing
        //element wala node

        Node* temp = new Node(d);

        temp->next = curr->next;
        curr->next = temp;
        //iss prakar hmne CLL me insertion kr liya

    }
    cout<<" ";
}

//Traversing 
void print(Node* tail){

    Node* temp = tail;

    do{
        cout<<tail->data<<" ";

        tail = tail->next;
    }while(tail != temp);

    cout<<endl;

}

int main(){

    Node* tail = NULL;

    //empty list me insertion kr rahe
    insertNode(tail,5,3);
    print(tail);


    //node create kro 3 dundh ke lao L-L me
    //kaha pe hai
    //or uske age 5 insert kr dena
    insertNode(tail,3,5);
    print(tail);


    insertNode(tail,5,7);
    print(tail);


    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail);



    return 0;
}