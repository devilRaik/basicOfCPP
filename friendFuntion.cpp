#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        int setNum(int v1, int v2){
            a = v1;
            b = v2;
        }
        // Below line means that non member - sumComplex function is allowed to do anything with my private parts (members)
        friend Complex sumComplex(Complex o1, Complex o2);
        void getNum(){
            cout<<"The Complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNum((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNum(1,4);
    c1.getNum();
    c2.setNum(4,5);
    c2.getNum();

    sum = sumComplex(c1, c2);  
    sum.getNum();
    return 0;
}

/** Properties of friend functions
 * 1. Not in the scope of class
 * 2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
 * 3. Can be invoked without the help of any object
 * 4. Usually contans the objects as arguments
 * 5. Can be declared inside public or private section of the class
 * 6. It cannot access the members directly by their names and need object_name.member_name
 */