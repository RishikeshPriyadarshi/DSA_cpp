             LINKED LIST
             ------------

 >It is a "Data structure" which is " collection of Nodes"

       Nodes:"In nodes ther will be some data"
              and "Address of Next-Node "

   or we can say;

 Linked is a type of Linear-Data-Structure,which is formed 
 by collection of nodes

      There r many nodes:
      "Node Display data" and "addrss of next node"


___________________________________________________________

Why Linked-List Needed???

  We know in case of 'Array'
  we made an array of size 10
  i.e arr[10];

      will we able to change at Run-Time?
       or 
      we have ran the code, and now we ant to make it 100 size 
      can we do it?
      --we Cannot Do it

 Now somebody will say we can do it usin VECTOR

   suppose we have made vector of size 5
   i.e. vector<int> v(5);

   and this will  be fully filled,
    so what it will do?
   --Vector is an  type of Dynamic Array 

   so its size becomes doubled ,i.e. 10
   and all the values will be Copied in it

   so in short;
   >New-Storage is Allocated and 
   >values got copied in it
 

  CAN We say it is an OPTIMAL-CASE???
    >No



->SO to "minimize "(Bharpaye) all these things 
  "linked-list" is neeeded

______________________________________________________

Advantages of Linked-List:
---------------------------

1. It is "Dynamic Data-Structure" ,
   means we can increase/decrease the size at Run-Time

2. So "No Memory Wastage "

3. Insertion/Deletion is Easy,
  "Because there is no need to shift of element fwd/bwd
    for adjustment or making place for new elements "


_____________________________________________________________________________________
    
    TYPES of LINKED LIST:
    ----------------------

    1.) SINGLY          LINKED-LIST
    2.) DOUBLY          LINKED-LIST
    3.) CIRCULAR        LINKED-LIST
    4.) CIRCULAR DOUBLY LINKED-LIST



___________________________________________________________________________



  NOde contains: 
                Data 
                Address of Next-Node

            Data-> suppose int 

            Address-> This is a pointer of node-Type   


      class LinkedListNode{

        public:
        int data;

        //now we need pointer of "node-type" to store data
        // and node is of LinkedList
        LinkedListNode* next;

      };


      //so here line(97-106) , we have implented node
      //there is some data
      //there will be pointer containing Address
      //and pointing to next node      