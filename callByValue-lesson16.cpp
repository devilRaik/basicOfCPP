#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;   
// }

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is : "<<sum(4,5);
    cout<<"The value of x is "<<x<<"and the value of y is "<<y<<endl;
    swap(x,y);
    swapPointer(&x,&y);
    cout<<"The value of x after swaping is: "<<x<<" and the value of y after swaping is :"<<y<<endl;
    return 0;
}