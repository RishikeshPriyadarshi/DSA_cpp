/*

INSERTION SORT

its logic can be understood by the example of cards

>>suppose we have 5 cards 5,2,6,9,4 respectively


>>The cards are coming to us one by one ,first we will be handed one card,
then another, then another, then another, then another, then another

>>>Now we have to keep the card in the sorted order(in inc. order)

>>now in our hand came card 5 ,and so we keep it,fine
since it is singke ele so it is sorted

>>now card 2 came in our hand,so we compare it with 5,and since it
smaller than 5 it will be placed before 5


>>now 6 came and it is bigger than 5 so irt will be placed after 5

>>now 9 came it is bigger than 6 it will placed after 6 in rhs

>>now 4 came then we compare it with 9 it is smaller than compare
it with 6 than 5 and 2 and place it after 2


>>SO NOW 2,4,5,6,9 IT IS IN SORTED ORDER...

>>THIS IS INSERTION SORT

>>so we compare the elements and put it on LHS or RHS a/c to its
largness...



>>HERE we are taking single element ,we assume it is sorted,but next
we are picking is being compared with the first element and checked 
whether it shoukd be kept on the LHS or RHS..

>>IN INSERTION SORT WE R NOT SWAPPING WE R SHIFTING


......>>Benifits:::

1>>>it is an ADAPTIVE ALGO  means with time our array is being sorted

2>>>It is very STABLE ALGO 


3>>>Talking about Space complexity the variable has been created
So we have CONSTANT SPACE O(1)

>>T.C---O(N^2) WORST CASE
>>BEST CASE O(N)



*/

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for(int i=1;i<n;i++){

        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--){

          if (arr[j] > temp) {
            // then shift

            arr[j + 1] = arr[j];
          }

          else {
            // when the situation comes if there is value greater
            // than the value of j so we have to come out so break

            break;
          }
        }   

        arr[j+1]=temp;
    }
}