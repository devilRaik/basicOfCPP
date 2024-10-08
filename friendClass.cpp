#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring function as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);
    // Aliter: Declaring the entire calculator class as fiend

    friend class Calculator;

public:
    int setNum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNum()
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNum(5, 6);
    c2.setNum(9, 5);
    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of O1 and O2 is " << res << endl;
    int resc = calc.sumCompComplex(c1, c2);
    cout << "The sum of Complex part of O1 and O2 is " << resc << endl;

    return 0;
}