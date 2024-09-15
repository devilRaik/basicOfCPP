#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a = 45, b=22;
    // cout<<"The a is : "<<a<<endl<<"The a is : "<<b<<endl;
    // a = 42, b = 44;
    // cout<<"Updated a is : "<<a<<endl<<"Updated b is : "<<b;
    // const int a = 3.14;
    // a = 4.44; // This will never change because int has declared as a const so it is only readable not wirtable
    // cout<<a;
    // int a = 3, b = 44, c = 232;
    // setw is a keyword to manupulator
    // cout<<"Number first:"<<setw(4)<<a<<endl;
    // cout<<"Number Second: "<<setw(4)<<b<<endl;
    // cout<<"Number Third:"<<setw(4)<<c<<endl;

    // cout<<"Number first without setw:"<<a<<endl;
    // cout<<"Number Third without setw:"<<c<<endl;
    // cout<<"Number Second without setw:"<<b;

    // Operator Precedenc
    int a=4, b=2;
    int c = ((((a*b)-b)+a)*b)/a;
    cout<<c;
    return 0;
}