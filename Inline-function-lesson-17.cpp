/**
 * Inline function, Default and Constant Argument in C
 * 1. Inline function - it use to save time during compilation whenever call function multiple time. it replace with function calling with function code. it use for small function not for big because of extra cach memory consumption and also not use while using recursion
 * 
 * static variable use only once and retian the next value while execting a function | it not use with inline function
 */

#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     return a*b;
// }

int product(int a, int b){
    static int c=0;
    c = c + 1;
    return a*b+c;
}

float moneyReceived(int currentMoney, float factor = 1.08){
    // In this case we don't pass 2nd argument in the function parameters until condition change of program because that is default argument and we pass default argument after main variable argument.
    return currentMoney*factor;
}

int strlen(const char *p){
    // Whenever we want to restrict the argument in funtion then we use const keyword with the argment
}

int main(){
    int a,b;
    // cout<<"Enter the value of a and b :";
    // cin>>a>>b;
    // cout<<"The Product of a and b is :"<<product(a,b);    
    int money;
    cout<<"Enter your amount you have in Bank : "<<endl;
    cin>>money;
    cout<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP : If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year"<<endl;
    return 0;
}