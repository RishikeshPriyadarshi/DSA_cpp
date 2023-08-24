//code studio question


#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {

    //Base case
    if(nStairs<0)
    return 0;

    if(nStairs==0)
    return 1;

    //Recursive Relation

    int ans=countDistinctWays(nStairs-1)
           +countDistinctWays(nStairs-2);


           return ans;



}


//solve it using D.P to avoid T.L.E