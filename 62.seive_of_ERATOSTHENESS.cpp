//we will solve this  using algo "SEIVE OF ERATOSTHENES"

/*
means firstly mark Every number as Prime number 

and then numbers which are Coming in Table MARK them as NON-PRIME
*/

class Solution {
public:
    int countPrimes(int n) {

        int count=0;

      //sbse pehle hamne ek vector bana liya or saare numbers ko TRUE marked kr diya
      //TRUE means Prime Number

        vector<bool> prime(n+1,true);//we don't wanna check n-1 wala index so index 
        // 1 badha ke daal diya    

        //sab me n+1 to daaal diya but NOW "0 and 1" are NON-PRIME numbers so we will update it
        prime[1]=prime[0]=false;

        //we will start index from 2 as prime no. start from 2
        for(int i=2;i<n;i++){

            //agr current no. ek prime no. hai to count badha de
            if(prime[i]){
                count++;
            }

            //iske baad jo unke table me aaa rahe hai unhe mark krde mtlb NON-PRIME Mark krde
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }


        }

        return count;

    }
};
/*COMPLEXITY

n-total

jab hum 2 ke table me aate hai to mark krte hai ye prime hai baaki sb non-prime hai so
n/2,similarly for table 3- n/3....and so on ....n/n

(n/2+n/3+n/5+......)
it will make a HARMONIC PROGRESSION

So
n(1/2+1/3+1/5+.....)

after solving this we will get log(logn)=n*log(log(n))

we find how it came by seeing Taylor's Series
*/

//T.C=)=O(n*log(log(n)))