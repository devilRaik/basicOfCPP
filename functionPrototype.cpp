// Lecture - 15
#include<iostream>
using namespace std;

// function prototype - function prototype is the method to call function with prototype by declaring function prototype before the main function
/**
 * int sum(int num1, int num2); //--Acceptable
 * int sum(int a,b); //-->Not Acceptable
 * int sum(int,int); //--> Acceptable
 * void p(void); //-->Acceptable
 */
int sum(int num1, int num2);
void p();
int main(){
    int a , b;
    cout<<"Enter the First Number: "<<endl;
    cin>>a;
    cout<<"Enter the First Number: "<<endl;
    cin>>b;
    cout<<"The Sum of numbers: "<<sum(a,b);
    p();
    return 0;
}

int sum(int num1, int num2){
    int sum = num1+num2;
    return sum;
}

void p(void){
    cout<<"\nHello, Good Morning";
}