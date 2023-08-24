#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    //Pointers
    Node* next;
    Node* prev;
   
    //CONSTRUCTOR
    Node(int d){

        this->data = d;
        this->next = NULL;
    }

    //DESTRUCTOR
    ~Node(){
        int val = this->data;

        if(next != NULL){

            delete next;

            next = NULL;
        }
        cout<<"Memory freed for node with data "<<val<<endl;

    }
};
/*
     In CLL, here it is little bit diffrent

 Note: Here we do not use head pointer
       "we use tail pointer "

    Means if simply we take the tail ptr,
    then using it we can add it to tail, and at 
    head also  

    if we have to reach the 1st-node from last node,

if there is tail then it is pointing to head node,
so there is no need to create head ,
we can use head and tail by tail pointer only
      

*/

void insertNode(Node* &tail,int element, int d){
    //element hmne isiliye dala hai kyoki val
    //ko compare krana hai or usse pata 
    //chalega kiske aage daalna hai


    

    //Assuming the Element "Present" in the List

    //1st case : list is empty
    if(tail==NULL){

        Node* newNode = new Node(d);

        tail = newNode;

          //newNode ka jo nexxt hai apne
          //upr hi point kr raha hai
        newNode->next = newNode;
        //node ko hmne circular bana liya 
    }
    
    //case: Non- Empty list
    //Assuming Element present in the List
    else{

        //tail ko curr ptr me daal denge
        Node* curr = tail;

        //jb tk element nahi milega search krenge
        while(curr->data != element){
            //tb tk data ko aage badhyenge
            curr = curr->next;
        }

        //element found -> curr is representing
        //element weala node
        Node * temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail){

    /*
     Tail se start kro print krana,phir head
     pe jao, phir uske aage ke elemnt
     phir jb tail pr aao to ruk jao 


/*

//when there is single-node, it will not be printwd
//using below

   cout<<tail->data<<" ";

   while(tail->next != temp){
    
    cout<<tail->data<<" ";
    
    tail = tail->next;
   }

   cout<<" ";
}


*/

//we will be using do-while loop,
//to prinnt even iif there is single node
//do while loop gets executed atleast once

Node* temp = tail;

do{ //we wnt to print data of tail
    
    cout<<tail->data<<" ";

     tail= tail->next;//tail ki data ko age badaha diya
}while(tail != temp);

cout<<endl;


}


int main(){

    Node* tail = NULL;

    //Jb Hm empty- list me insert kr rahe
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

