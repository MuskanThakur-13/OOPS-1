#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int rollNumber;

    private:
    int age;

    public:
    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    // int getAge(){
    //     if(age == INT_MIN){
    //         cout<<"wrong password"<<endl;
    //         return 0;
    //     }
    //     return age;
    // }
    // void setAge(int a,int password){
    //     if(password != 123){
    //         age=INT_MIN;
    //         return;
    //     }
    //     if(a<0){
    //         age=INT_MIN;
    //         return;
    //     }
    //     age=a;
    // }

    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
    

};

int main(){
    Student s1;
    // s1.age=12; //age is private so we can't access it here
    s1.rollNumber=174;
    s1.setAge(21);
    // s1.setAge(67,138); when password is given,second argument is for password
    cout<<"age is: "<<s1.getAge()<<endl;
    s1.display();
}

