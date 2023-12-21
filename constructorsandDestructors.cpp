//copy constructor
//copy assignment operator
//destructor

#include<iostream>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    ~ Student(){
        cout<<"destructor is called"<<endl;
    }
    Student(){
        cout<<"default constructor is called"<<endl;
    }

    Student(int age,int rollNumber){
        cout<<"Constructor called !"<<endl;
        this->age=age;
        this->rollNumber=rollNumber;
    }
    void display(){
        cout<<"age: "<<age<<" rollNumber: "<<rollNumber<<endl;
    }
};


int main(){
    // Student s1(21,174);
    // cout<<"s1 : ";
    // s1.display();

    // //Copy constructor is called,it is interperated as s2.student(s1)
    // Student s2(s1); //statically copy constructor
    // cout<<"s2 : ";
    // s2.display();

    // Student *s3=new Student(45,397);
    // cout<<"s3: ";
    // s3->display();

    // Student s4(*s3); // copying dynimically created object into statically created object s4,by defrencing s3
    // Student *s5=new Student(*s3);
    // Student *s6=new Student(s1);


    // //copy assignment operator(=)
    // Student s7(56,897);
    // Student s8(96,917);
    // s7=s8;

    // Student *s9=new Student(123,781);
    // *s9=s1;
    // s8=*s9;

    //destructor is called for statically created objects only,for dynimically created object to deallocate it ,wew need to use delete 
    

    Student s1(12,67);
    Student s2(78,23);
    Student *s3=new Student(78,55);
    //here destructor is called only twice,that is only for s1 and s2 objects which are statically created

    delete s3; //now destructor is also called for s3,so total 3 times destructor will be called now

    Student s4(s1); //destructor is called here
    Student s5(*s3); //destructor is called here

    Student *s6=new Student(s2); //destructor is not called
    delete s6; // now destrctor is called
}

