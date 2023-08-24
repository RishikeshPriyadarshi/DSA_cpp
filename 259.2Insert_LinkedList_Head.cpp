#include<iostream>
using namespace std;

class Node{

    public:

    int data;

    //pointer
    Node* next;


    //Constructor
    Node(int data){

        this->data=data;
        this->next=NULL;               
    }

};

//Funcn For Insertion
void InsertAtHead(Node* &head,int d){//iske andar hum head bhej rahe
                                       //or data (i.e. d) bhej rahe


    // jb bhi koi nayi data (d) aati hai to ,uske liye
    //naya node create krte hai hum

    //new node creation
    Node* temp= new Node(d);

    //Nayi Node jo hmne line 32 pe create kri hai, iska
    //ptr jo NUll ko point kr raha
    //usko hatake "head wali node ko point krwani hai"
    temp->next=head;

    //3rd step me hme head ko change krke temp ko point krwna hai
    head=temp;                                   

     
}


//AB Hm ek print funcn likhenge jo linked list ko print krega
void print(Node* &head){//Here & is not needed to prnt,bt we do not want
                        //to create copy so we hv taken &

    Node* temp=head;

    //value print krao temp ka jb tk temp NULL nahi hota
    while(temp != NULL){
        
        //printing the value of temp
        cout<<temp->data<<" "<<endl;

        //temp ko aage bhi badahana hai last tk pahuachane ke liye
        temp = temp->next;
    }

    cout<<endl;
}


int main(){

    //Created the new node
    Node* node1= new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    
    //head pointing to new node
    Node* head= node1;
    print(head);


    //Insert kro
    InsertAtHead(head,12);
    print(head);

    InsertAtHead(head,15);
    print(head);


}


/*

  Note: If we do not use "&(reference)" it will create not 
        create copy
        rather it will change in original funcn
*/