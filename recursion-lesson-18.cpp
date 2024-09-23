// In this method, a function calls itself from within its own code
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * (n - 1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n - 1);
}

int main()
{
    int a;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "The value of " << a << " factorial is :" << factorial(a) << endl;
    return 0;
}