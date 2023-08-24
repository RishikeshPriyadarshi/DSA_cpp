       SINGLY LINKED-LIST 
       -------------------

 EX;
 --
 suppose there r some blocks

 in blocks there r 2 Partitions

 There will be 2 things inside  all block 
    a.) Data  b.) Pointer( which will be pointing to 
                           address of 1st partion containing
                           data of next block)



Note: And in the Last block "Second-Partition will not be pointing
                             to any node" so NULL                       

NOTE: "Partition" is also "NODES"

   or
 we can say "hen we have Single Pointer & Data ", this type of
 list is called "SINGLY LINKED-LIST"

____________________________________________________________

Note: Whenver there is Linked-List, there will be 
      Node in which there will be "HEAD-POINTER" in starting

      jo ki linked-list ke start ko darsa raha hoga

_______________________________________________________________


Lets talk about INSERTION:
                ----------


How can we INSERT???

 > Let us say 1st we hv created a node,
    it is empty is starting
    our Head will point to NULL
    i.e. Node* Head=Null;//strting me jo Head hoga NULL hoga           

   When we created a "new node",
   i.e. Node* node1= new Node(10);

   so it will be like
   --------- 
   |       |
   |  10|  | ; the partion(node ) after 10 pointing to null
   ---------


   NOW , we want ki Hum ek or NODE dale:


     So we made a funcn, insertAtHead(), 
      lets say we want to make node taking 12 as i/p...

      so it will be like,

   --------- 
   |       |
   |  12|  | ; the partion(node ) after 12 pointing to null
   ---------


   Now we want to connect this Node at(65-68) to connect 
   with node (line 51-54)

   so jo null point kr raha hai 12 me uss NULL ko Hatake
   i.e. uss ptr ko hatke 10 pe point karana hoga

   lets say node containing 12 be named "temp"
    so,
    temp->next=head/node1;//head or node1 both r same
    
    so ee have pointed it like this


   
   Now what we know taht "head alwys points to start"

   so "head ko 10 se hatana hoga " and "12 pe lagana hoga"
   so,
   head=temp;

   similarly,
   if there is more node we can insert it likewise


   This is how we do Insertion....




