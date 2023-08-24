      Circular Linked-List
      ---------------------

-> "Singly list can be Circular"

in singly linked-list, the last-node was 
pointing to NULL,

"While in CLL , the last-node will point
 to 1st node"




 ->"Similiarly, Doubly linked-list can be circular"

 
 in CLL , the last node will point to 1st node
 and 1st node will point to last node

 ___________________________________________________

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
___________________________________________________________

"We cannot tell from where linked list is starting
 and from where it is ending,
 as it is circular"

 so we will give data in inputt,as we get the data
 then create a new node after that


 Example: if this is linked, there is 3, then 5,
           then 7,then 9

           and 9 is pointing to 3



Now if we give 7 as input data, then 
we r searching for 7, after searching for 2
blocks it is there

Now we want to create new NOde , we will create 
new node for 11 , and we pointed it here and removed
this connection b/w 7 and 9 
and then we will point 11 to 7 and 9,

then it will become CLL of
3,5,7,11,9 then circular

So A/c to this data(7 or can be anything),
we will insert a new node


______________________________________________________

void insertNode(node* &tail,int element, int d){
/*
       1st case : 
       ------------
       ye ho sakta hai ki empty list hai
              jaha tail jo hai NULL hai,

        in this we will create the new Node 
        or ye apne aap pr hi point kr rahi hogi ,
        as it is CLL

        1st step: create new node, pointed its 
                  next to itself

        2nd: tail = temp

        3rd: temp->next = temp

        Note : temp and temp->next in same block
            temp is whole block
            temp->next is right partition of block
    */
   /*
    2nd case:
    ----------
    ye ho sakta hai , when there is only 1 node
    there is one node which is pointing to itself

    and here we want to insert one more node
    there is 5 which is pointing to NULL

    So in i/p we will give data,by comparing it
    insert after this,and data from which we
    will create a node

    then we searched , here we got 3, this is 
                      our curr node

    and the new node i.e. 5 which we hv created,
       we named it temp

    now we want to put 5 after 3


    1st step: curr->next is pointing to something,
              ye kahi na kahi point kr raha to 
              usko save kra lete hai

              so, forward= curr->next;

    2nd step: ab hm chahte hai curr->next temp pe
         point kre

         so, curr->next->temp;

    3rd step: temp->next = forward                                    
   
   */
/*
    3rd case:
    ---------
    ye ho skta hai jb hamare pass "2-Node" ho
     node 3 and node 5

     now here it is to cases:
     1.we can put node after 3
     2.we can put node after 5

lets see 1.

     4 we hv to put b/w 3 and 5

     1stly: Node creation

     2ndly: //forward = curr ( 3 wala)
           lets optimise it

         temp( 4 wala)->next = curr(3 wala)->next
         i.e. temp->next = curr-> next

     3rdly: now we want ki jo 3 point kr raha hai
          4 wale block ko, 
          waha na point krke 3 wale block pr kre

          curr->next = temp;  



lets see 2.

    now we want to put a node after 5
    i.e. between 5 and 3

    we want to put node 6 which will come 
    after node 5 and then node 6 pointed to 3


    1stly: Create a Node

    2ndly: temp(6 wala)->next = curr(5 wala)->next
            
            temp ka next -- curr next me jayega

            i.e. temp->next = curr->next;

    3rdly: 5(curr) jo 3 ko point kr raha use kat
           ke use 6(temp) ko point krwa do

           so, curr->next = temp;         
        
  
  */


void deleteNode{

    //Now suppose we want to delete the node

    /*
    
     suppose there is CLL of 3,5,7,9

     Now we wnt to delete 5 
     and point 3 to 7 by deleting 5

     3(is previous)  and 5(is current)

     1st step:
     ---------
     prev(3)-next = curr(5)->next(7)
     i.e.
     prev->next = curr->next;

     mtlb 3 ka next ko 7 pe point kra diya
     5 ko kaat ke


     2nd step:
     --------
     curr(5)->next jo 7 pe point kr raha usko
     kato or NULL pe point karweao

     curr->next = NULL;

     3rd step:
     --------
     ab 5 wala node alg ho gaya hai to delete krdo

     Means Memory free krwani hai curr ki
     using Destructor
    
    */
}