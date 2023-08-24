/*
  We Have To Insert Node in the Middle
   
   i.e. in between the Nodes
*/

/*
  or we can make linked list for 

  Inserting Node at Any Position

*/

#include<iostream>
using namespace std;


class Node{

    public:

    int data;

    //pointer
    Node* next;

    //CONSTRUCTOR
    Node(int data){

        this->data =data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){

    //New Node Creation
    Node* temp = new Node(d);

    //2nd step
    temp->next = head;
    //or
    //cout<<this->next<<endl;

    //3rd Step
    head = temp;
}


void insertAtTail(Node* &tail, int d){

    //New Node Creation
    Node* temp= new Node(d);

    tail->next = temp;

    tail = tail->next;
}

//making funcn for Inserting Node at "Any-Postion"

/*
  Agr Hame " n posn pe insert krna hai "
   to hm  "n-1 position tk jaa rahe hai"
    i.e. n-1 node tk traverse kr rahe

   or manlo jo nayi Node hai  
      i.e. nodeToInsert

      so nodeToInsert ka next kya hoga  (right wala node)
      or jo right wala address hai 
      usko "left node ka right partion darsa raha hoga"
                  |
            temp->next

      so,
      nodeToInsert = temp->next; 

      and 

      temp->next = nodeToInsert
*/

void insertAtPosition(Node* &head,int position, int d){


    //for Traversing
    Node* temp =head;

    //staring me hmara current postion starting node hoga
    //so count 1 hoga
    int cnt= 1;

    //agr hme n tk jaana hai to n-1 node tk jana hai , so
    //or yaha pr 'n' i.e. position hai..
    while(cnt<position-1){
        //and ab hame temp ko aage badhana hai ,jb tk
        //temp n-1 tk nahi pahuch jaye
        temp=temp->next;
        cnt++;
    }

    //Ab hame "int d" ke liye node banana hai
    //Creating an Node for "d"
    Node* nodeToInsert = new Node(d);

    //nodeToInsert Ab kiisko point krega
    nodeToInsert->next = temp->next;//temp left side Block
                                    //next is right- partion
                                    //of temp
     temp->next = nodeToInsert;                               



}


void print(Node* &head){

    //New Node Creation
    Node* temp =head;

    while(temp != NULL){
        
        //printing the value of temp
        cout<<temp->data<<" ";

        //Increasing the Value of temp till it reaches the NULL
        temp = temp->next;
    }

    cout<<endl;
}

int main(){

    //creating new Node
    Node* node1 = new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node-1>next<<endl;

    //head pointed to node1
    Node* head = node1;

    Node* tail = node1;
    print(head);

    //Insertion

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

        
        //now insert 22 at 3rd position
    insertAtPosition(head,3,22);
    print(head);
        
}