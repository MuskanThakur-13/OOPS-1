//Constructors and This keyword
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    //Default constructor
    Student(){
        cout<<"Constructor Called"<<endl;
    }

    //Parametrized constructor
    Student(int r){
        cout<<"Parametrized constructor is called"<<endl;
        rollNumber=r;
    }
    //Constructor 3
    Student(int age,int rollNumber){
        cout<<"Constructor 3 is called"<<endl;
        cout<<"value of this:"<<this<<endl;
        this->age=age; // if we dont write this then also it will work fine,like age=age;
        this->rollNumber=rollNumber;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }


    //getters:-Getters are also called as Accessor functions
    //Getters are the member functions that allows to access the data members of the objects.They do not chnage the value of data members.
    int getAge(){
        return age;
    }
    //setters:-Setters are also called as mutator functions
    //Setters are the member functions, that allow us to change the data memebers of the object.
    void setAge(int a){
        age=a;
    }
    

};

int main(){
    Student s1;
    s1.display();
    Student s2;
    Student *s3=new Student;
    s3->display();

    //So constructor is called thrice,for s1,s2 and s3 object

    cout<<"Demo for parametrized constructor"<<endl;
    Student s4(12);
    s4.display();
    //dynimically
    Student *s5=new Student(101);
    s5->display();

    Student s6(21,174); //s6.student(21,174) constructor is called
    cout<<"Address of s6 object: "<<&s6<<endl;  //Value of this and adress of s6 is same
    s6.display();

}

