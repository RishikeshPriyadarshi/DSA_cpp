#include<iostream>
using namespace std;

class Student{

    private:
    //3 data members and 3 properties
    string name;
    int age;
    int height;


    public:
    //same way we want to write func
    int getAge(){
        return this->age;
    }


};

int main(){

    //creating Object
    Student first;

    cout<<"sab sahi chal raha "<<endl;

    return 0;
}