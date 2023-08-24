//We will also learn about "Eculid Algorithm"

GCD-Greatest Common Divisor

it is same as HCF(Highest Common Factor)

so what is HCF?
>>if we had 2 numbers,a and b,the HCF OR GCD ,the Highest number which can
  perfectly divide these 2 numbers, is Factor of both of them..

  means aisa number jo dono ko Divide krke Remainder 0 le aaye...


  for example 24 and 75

>> 24/2=12, 12/2=6, 6/2=3
   
   so 24:2*2*2*3

>>72/2=36, 36/2=18, 18/2=9, 9/3=3

  so 72:2*2*2*3


  now
  :2*2*2*3
  :2*2*2*3

  BY comparing

  HCF:2*2*2*3=24

  so GCD or  HCF is aisa no. jo dono ko perfectly dividide kr sakta hai or remainder
  0 laa skta hai


ECULID ALGORITHM
_______________________________________

gcd(a,b)=gcd(a-b,b)....this is the formula  by using this we can find gcd..

or we can rewrite this formula as: gcd(a,b)=gcd(a%b,b)....


we have to find GCD untill one paratemer i.e. either a%b or b is not 0, till then we have to apply
this formula..

gcd(72,24)=gcd(48,24)
          =gcd(24,24)
          =gcd(0,24)

          since one element became 0 so other element which remans that is our answer...



Relation B/W LCM and GCD
______________________________

lcm(a,b)*gcd(a,b)=a*b

i.e. LCM*HCF=Product of 2 numbers...

