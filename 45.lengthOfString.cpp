#include<iostream>
using namespace std;

/*
  whwnever we used to pass array earlier then we use to pass its size also

  but there is no need to Pass SIZE in CHARACTER ARRAY..
*/
int getLength(char name[]){ 

    int count=0;

    //We will start the inde from 0 and we will go untill we get the null character
    //means waha tk jaunga jb tk null character nahi milta(ya encounter nahi hota)
    //name[i]!=0
    for(int i=0;name[i]!='\0';i++){

        count++;


    }

    return count;

}

int main(){

    char name[20];

    cout<<"Enter Your Name :"<<endl;
    cin>>name;

    cout<<"Your Name is :"<<endl;
    cout<<name<<endl;

    cout<<"length is :"<<getLength(name)<<endl;

    return 0;
}