#include<iostream>
using namespace std;

class Fraction{
    public:
    int numerator;
    int denominator;

    //we made here parametrized constructor,as we added a constraint that default value should not be passed in numerator and denominator
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    //printing numerator nad denominator
    void print(){
        cout<<"Fraction: "<<numerator<<"/"<<denominator<<endl;
    }

     //It doesn't matter whether we make simplify function above add function or below add functio,both will work fine
    void simplify(){
        int gcd=1;
        int j=min(numerator,denominator); //write numerator or this->numerator both are same 
        //as gcd can't be greater than the samller number so we will run the loop till the smaller number
        for(int i=1;i<j;i++){
            if(numerator % i ==0 && denominator % i ==0){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        denominator=denominator/gcd;  // this->denominator or denominator both are same 
    }

    //Function to add two fractions
    void add(Fraction const &f2){
        int lcm=denominator * f2.denominator;
        int num=(numerator * f2.denominator) + (denominator * f2.numerator) ;
        numerator=num;
        denominator=lcm;

        simplify();
    }
    
    //function to multiply two fractions
    void multiply(Fraction const &f2){
        this->numerator=this->numerator *f2.numerator;
        this->denominator=this->denominator *f2.denominator;

        simplify();
    }

};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);
    f1.print();
    f2.print();

    f1.multiply(f2);
    f1.print();
    f2.print();
}