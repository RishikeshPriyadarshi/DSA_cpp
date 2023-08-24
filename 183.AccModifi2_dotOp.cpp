//

#include<iostream>
using namespace std;

class Hero{
    
    //Properties
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }
};

int main(){
    
    //Object Creation
    Hero ramesh;

    //Acessing properties or members using dot operator
    cout<<"health is : "<<ramesh.health<<endl;
    cout<<"level is : "<<ramesh.level<<endl;

    return 0;
}