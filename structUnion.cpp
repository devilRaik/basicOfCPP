#include<iostream>
using namespace std;
/**
 * Structure is a user-defined datatype what we use to combine different types of datatypes
 * to use structure we use keyword struct
 * typedef is a keyword what we can use to create shorcut to structure in shortform as the further program where we using ep in the place of 'struct employee'
 */
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

// Union is same like structure but it provide better memory management

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    // enums are used to give names to constants, which makes the code easier to read and maintain. Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1;
    // ep dev;
    // union money m1;
    // m1.rice = 32;
    // m1.car = 'd';
    // After declaring memory to car variable 'rice' variable will return garbage value|| because in Union we can provide memory to any one variable at a time
    // cout<<m1.rice;
    // dev.eId = 1;
    // dev.favChar = 'c';
    // dev.salary = 121212;
    // cout<<"The value is :"<<dev.eId<<endl;
    // cout<<"The value is :"<<dev.favChar<<endl;
    // cout<<"The value is :"<<dev.salary<<endl;

    return 0;
}