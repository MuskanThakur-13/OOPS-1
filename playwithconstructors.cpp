#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int id;

    Student(){
        cout<<"Constructor 1 is called "<<endl;
    }

    Student(int id){
        cout<<"Constructor 2 is called "<<endl;
        this->id=id;
    }

    Student(int age,int id){
        cout<<"Constructor 3 is called "<<endl;
        this->age=age;
        this->id=id;
    }

    void display(){
        cout<<"age : "<<age<<"  , "<<"id : "<<id<<endl;
    }
};

int main(){
    Student s1; //Constructor 1 called
    s1.display();
    Student s2(123); //Constructor 2 called
    s2.display();
    Student s3(21,345); //Constructor 3 called
    s3.display();

    Student s4(s3); //Copy constructor is called
    s1=s2;           //Copy assignment opeartor
    Student s5=s4;   //Copy constructor is called
}


