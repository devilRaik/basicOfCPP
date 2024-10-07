#include<iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        int sumRealComplex(Complex, Complex);
        int sumComComplex(Complex, Complex);
};


class Complex{
    int a,b;
    
    // Individually declaring functions as friend
        // friend int Calculator :: sumRealComplex(Complex, Complex);
        // friend int Calculator :: sumComComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
        friend class Calculator;
    public:
        int setNum(int v1, int v2){
            a = v1;
            b = v2;
        }

        void printNum(){
            cout<<"This complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
        return (o1.a + o2.a);
}

int Calculator :: sumComComplex(Complex o1, Complex o2){
        return (o1.b + o2.b);
}


int main(){
    Complex o1, o2;
    o1.setNum(3,5);
    o2.setNum(4,6);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int res1 = calc.sumComComplex(o1, o2);
    cout<<"The sum of real part of O1 and O2 is "<<res<<endl;
    cout<<"The sum of real other part of O1 and O2 is "<<res1<<endl;
    return 0;
}