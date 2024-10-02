#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex c1, Complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void printNumber(){
        cout<<"Your Complex number is : "<<a<<"+i"<<b<<endl;
    }
};

int main()
{
    Complex o1, o2, o3;
    o1.setData(2,5);
    o1.printNumber();

    o2.setData(4,2);
    o2.printNumber();

    o3.setDataBySum(o1,o2);
    o3.printNumber();
    
    return 0;
}