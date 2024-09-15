#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int* b = &a;
    // endpercent | & --> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value of address c is "<<*c<<endl;
    cout<<"The value of address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}