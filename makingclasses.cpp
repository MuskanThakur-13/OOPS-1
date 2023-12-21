#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    int rollNumber;

};

int main(){
    //creating objects Statically 
    Student s1;
    Student s2,s3;
    //setting the property of statically created object
    s1.age=17;
    s1.rollNumber=123;
    s2.age=18;
    s2.rollNumber=13;
    s3.age=19;
    s3.rollNumber=12;

    cout<<"age is: " <<s1.age<<" ,"<<" rollNumber is: "<<s1.rollNumber<<endl;
    cout<<"age is: " <<s2.age<<" ,"<<" rollNumber is: "<<s2.rollNumber<<endl;
    cout<<"age is: " <<s3.age<<" ,"<<" rollNumber is: "<<s3.rollNumber<<endl;

    //creating objects Dynamically 
    Student *s4=new Student;
    //setting the property of statically created object
    s4->age=25;         //or (*s4).age=25;
    s4->rollNumber=45;  //or (*s4).rollNumber=45;
    cout<<"age is: " <<s4->age<<" ,"<<" rollNumber is: "<<s4->rollNumber<<endl;

}