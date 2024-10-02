#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNum(int v1, int v2){
        a = v1;
        b = v2;
    }
    // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex c1, Complex c2);
    void printNumber(){
        cout<<"The Sum of the Number is "<<a<<" + "<<b<<endl;
    }
};

Complex sumComplex(Complex c1, Complex c2){
    Complex c3;
    c3.setNum((c1.a + c2.a), (c2.b + c2.b));
    return c3;
}

int main(){
    Complex a1, a2, sum;
    a1.setNum(1, 4);
    a2.setNum(4, 5);
    sum = sumComplex(a1, a2);
    return 0;
}

/**
 * Properties of friend functions
 * 1. Not in the scope of class
 * 2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
 * 3. Can be invoked without the help of any object
 * 4. Usually contans the objects as arguments
 * 5. Can be declared inside public or private section of the class
 * 6. It cannot access the members directly by their names and need object name.member name to access any member.
 */