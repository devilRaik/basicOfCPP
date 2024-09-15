#include<iostream>
using namespace std;
int c = 55;
int main()
{
    // Build in Data types
    // float d = 44.4f;
    // long double e = 44.4l;
    // // if we never mention the float value with f or double value with l so by default value will decleard as a double
    // int a, b, c;
    // cout<<"Enter the number a: ";
    // cin>>a;
    // cout<<"Enter the number b: ";
    // cin>>b;
    // c=a+b;
    // cout<<"The C value is : "<<c<<endl;
    // cout<<"The global c is "<<::c; // "::" <--- this is scope resolution operator to access of global variable

//  Float, double and long double literals
    // float d=44.4f;
    // long double e = 44.4l;
    // cout<<"The size of 44.4 is: "<<sizeof(44.4)<<endl;
    // cout<<"The size of 44.4f is: "<<sizeof(44.4f)<<endl;
    // cout<<"The size of 44.4F is: "<<sizeof(44.4F)<<endl;
    // cout<<"The size of 44.4l is: "<<sizeof(44.4l)<<endl;
    // cout<<"The size of 44.4L is: "<<sizeof(44.4L)<<endl;
    
    // Reference Variable
    float x = 55;
    float &  y = x; //x had become referenced by y
    cout<<x<<endl;
    cout<<y<<endl;

    // typecasting
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is: "<<(float)a;
    cout<<"The value of b is: "<<(int)b;
    cout<<"The value of a is: "<<float(a);
    cout<<"The value of b is: "<<int(b);
    int c = int(b);
}
