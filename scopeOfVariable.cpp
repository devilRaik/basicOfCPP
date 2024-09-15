#include<iostream>
using namespace std;
int num1 = 5;
void sum(){
    int num1;
    cout<<"Global variable value is : "<<num1;
    // This function is printing global variable value
}

int main(){
    int num1 = 2;
    cout<<"Local variable value is : "<<num1<<endl;
    // This function is printing local variable value
    sum();
    // this funtion will print local variable value because dosen't defined. That's why it will take global variable
}

// Rules to create variable
/*
1. Variable names in C++ can range from 1 to 255 characters.
2. All variable names must begin with a letter of the alphabet or an underscore()
3. After the first initial letter, variable names can also contain letters and numbers.
4. Variable names are case sensitive.
5. No space or special charactera are allowed
6. You cannot use a C++ keyword (a reserved word) as a variable name.
*/