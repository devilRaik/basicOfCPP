/**
 * Function overloading is the techniq to overwrite the function with the same name but with different functionality we called it "polimorphism" also
 */

#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Function-1 with 2 argument";
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Function-2 with 3 argument";
    return a + b + c;
}

// Volume of Cylinder
int volume(double r , int h){
    return (3.14*r*r*h);
}

// Volume of Cube
int volume(int a){
    return a*a*a;
}
// Volume of Rectangular Box
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of a and b is : "<<sum(5,6)<<endl;
    cout<<"The sum of a and b is : "<<sum(5,5,6)<<endl;
    cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3,6,5)<<endl;
    cout<<"The volume of cylinder of radius 3 and heigh 7 is "<<volume(3,7)<<endl;
    cout<<"The volume of cube 3 "<<volume(3)<<endl;

    return 0;
}