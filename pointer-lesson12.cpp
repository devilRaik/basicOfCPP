#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a; 
    // & ---> (address of) operator
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The address of a is : "<<b<<endl;

    // * ---> we use '*' Dereference operator to get value of that variable which address we declared as a pointer variable we use it like *(variable name)

    cout<<"The value at address b is : "<<*b<<endl;
    // Pointer to pointer variable
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;

}

// In this programm we'll clear the concept of pointer
// What is pointer? ---> data type which holds the address of other data types
