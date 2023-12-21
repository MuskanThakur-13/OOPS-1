#include<iostream>
using namespace std;

class ComplexNumber{
    private:
    int real;
    int imaginary;

    public:
    ComplexNumber(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }

    void print(){
        cout<<this->real<<" "<<"+"<<" "<<"i"<<this->imaginary<<endl;
    }

    void plus(ComplexNumber const &c2){
        this->real=this->real + c2.real;
        this->imaginary=this->imaginary + c2.imaginary;
    }

    void multiply(ComplexNumber const &c2){
        int r=(this->real * c2.real) - (this->imaginary * c2.imaginary);
        int img=(this->real * c2.imaginary) + (this->imaginary * c2.real);


    // first we stored real in r and imaginary in img ,because if we directly do the changes in this->real,then in second step when we are doing changes in this->imaginary ,it will give wrong results,because it will do calculations according to the changed real,not on the original real part
        this->real=r;
        this->imaginary=img;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumber c1(real1, imaginary1);
    ComplexNumber c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}