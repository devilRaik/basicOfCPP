#include <iostream>
using namespace std;

class C2;
class C1
{
    int data;

public:
    void indata(int value1)
    {
        data = value1;
    }

    void display()
    {
        cout <<"The First Value is :"<< data << endl;
    }
    friend void exchange(C1 &, C2 &);
};
class C2
{
    int data1;

public:
    void indata(int value2)
    {
        data1 = value2;
    }

    void display()
    {
        cout <<"The Second Value is :"<< data1 << endl;
    }
    friend void exchange(C1 &, C2 &);
};

void exchange(C1 &a, C2 &b)
{
    int temp = a.data;
    a.data = b.data1;
    b.data1 = temp;
}

int main()
{
    C1 oc1;
    C2 oc2;
    oc1.indata(5);
    oc1.display();
    oc2.indata(9);
    oc2.display();

    exchange(oc1, oc2);
    cout<<"The value of Class One is : ";
    oc1.display();
    cout<<"The value of Class Two is : ";
    oc2.display();
    return 0;
}