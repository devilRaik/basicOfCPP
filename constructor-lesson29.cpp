#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    /**
     * Creating Constructor
     * 1. COnstructor is a speacial number function with the same name as of the class.
     * 2. It is used to initialize the objects of its class
     * 3. It is automatically invoked whenever an object is created
     */
    void printNumber(){
        cout<<"The Complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }
    Complex(void); // Constructor declaration
};

Complex :: Complex(void){
    a = 10;
    b = 23;
}

int main(){
    Complex c;
    c.printNumber();
    return 0;
}