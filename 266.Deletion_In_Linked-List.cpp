/*
Deletion can be done using "position" or "Value"
     i.e.

     delete(value)
       or 
     delete(position)

  Here we will be seeing by:
      delete(position)  

   Position's Range will be : 1 to any given Length        
*/

//After Deleting the memory , we also want to 
//"Free the Memory"




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
        this->next = NULL;
    }


    //Destructor for freeing the Memory
    ~Node(){

        int value = this->data;
        
        //Freeing the  memory
        if(this->next != NULL){//Then free the memory
            delete next;

            //or next ko null krdo
            this->next=NULL;

        }

        cout<<"Memory is freed for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){

    //Creation of new Node
    Node* temp =new Node(d);

    //2nd step
    temp->next = head;

    //3rd Step
    head =temp;

}


void insertAtTail(Node* &tail,int d){

    //Creation of new Node
    Node* temp =new Node(d);

    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    //For Traversing
    Node* temp = head;

    int cnt =1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //Inserting at Last Position
    if(temp->next=NULL){
        insertAtTail(tail,d);
    }

    //Creating a Node for "d"
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void print(Node* &head){

    //Node Traversing
    Node* temp = head;

    while(temp != NULL){

        //print the vlaue of temp
        cout<<temp->data<<" ";

        //IIncreasing the val of Temp till it reaces Null
        temp=temp->next;
    }

    cout<<endl;
}

//"DELETING" the Node(any node) Using "POSITION"
//POsition range will be : 1 to given-Lengh
//A/C to this Question

/*

  //For Deleting "Middle Node"
   >we will take temp for  left side of partion of Node

   > we will take curr-position for righh side of partition of node

   >"temp" will point to "current-position" after deletiing 
     the node

   >left side partition of node i.e. temp is pointing
     to address of "right side of partition of right-node
                     after Middle Node(which to be deleted)" 
                     called "curr-position"  



        SO,
        temp->next = curr->next;            



    //For Deletion of "Last Node"

    >Here we will take "prev-node " as on left side of 
                                    Last node

    > and we will take "curr-node" as on the right side 
                                   the Last node, which
                                   is to be delted   



            SO,

           prev-next = curr-next ;  






   //For Deletion of "First-Node"

      Note: For this(first) there will be "no Previous node" 

      So,
        First is our head and we want to delete that head only
         which is  "current" only
         and ther is nothing previous to that it is NULL

         previous ka next is NULL

         InShort,
         prev->next

         i.e NULL->next (It will give Error)

       SO ISKO ALAG SE "HANDLE" Kro                                                                            

*/
void deleteNode(int position, Node* &head){
    

    //Deleting "first/start Node"
    if(position==1){

        Node* temp =head;

        /*
        //it means jo first i.e left Node 
        //ka right partition hai usko ek aage move kra denge
        //mtlb Left-node ke right-partion me
        //Because left-node ka rigt-partiion contains
        //address of right partion of right-node...
        */
        head = head->next; 


        temp->next=NULL;

        //"FREEING" the Memory of first-node
        delete temp; //since we have used delete here
                    //we have to make DESTRUCTOR
                    //inside the class
    
        
    }
    else{ // in else Deleting any "Middle-Node"
          //or "Last-Node"
          //dono case chl jaynge yaha



          //Deleting Middle Node
          /*
            //pehle Hm Doo POINTER banayenge

           >pointer Current-node startinng me head ko point
             kr raha hoga

           >or ek pointer prev ke liye ,jo starting me 
             NULL hoga..
         */

        Node* curr = head;

        Node* prev = NULL;

        int cnt =1;

        while(cnt<position){ //aggr hm 3 node delete krna chhah rahe
                              //curr pointer 3rd pr
                              //and prev- pointer 2nd pr

                       //starting me hm head node pe hai i.e. 1 pe
                    //so hm do baar me 3 pr aaye
                    //mtlb hm 2 baar aage badhe 3rd posn ke case me



            /*
             starting me hamara current lft node(first) ke 
              right partition pe hoga or
              previous - --  lft node(first) ke left i.e. NULL
              pe hoga

              so hm current ko kaise aage badhayenge
              next--- it is right partion of left node
                    and it is pointing to add. of right-partion
                     of riight node

                     so,curr =curr->next
                     ye krne se pehle hame previous(hich is NULL)
                     use hame current ke posn pe point krtana hai

                     so, prv =curr

                     so it is 2 step process

                     prev=curr;
                     curr= curr->next;

               */

              prev=curr;
              curr=curr->next;
              cnt++;

        }

        prev->next =curr->next;


        curr->next=NULL;
        delete curr;


    }

}

int main(){

    //Creation of Object(Node) in Heap
    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    
    //head pointed to node1
    Node* head = node1;

    //tail pointed to node1
    Node* tail = node1;
    print(head);


    //INSERtION

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);


    insertAtPosition(tail,head,4,22);
    print(head);

    insertAtPosition(tail,head,5,33);
    print(head);

    //For verification of head and tail
    cout<<"head"<<head->data<<endl;

    cout<<"tail"<<tail->data<<endl;


    //DELETION
    deleteNode(1,head);
    print(head);

    return 0;

}

