// C++ come with libraries which helps us in performing input/output. In c++ sequence of bytes corresponding to input and output are commonly known as streams.
// Input Stream: Direction of flow of bytes takes place from input device(for ex Keyboard) to the main memory.

// Input Stream: Direction of flow of bytes takes place from main memory to the output device (for Example Display)
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the first Number: ";//"<<" This operator is Insertion operator
    cin>>num1;//">>" This operator is Extraction operator
    cout<<"Enter the Second Number: ";//"<<" This operator is Insertion operator
    cin>>num2;//">>" This operator is Extraction operator
    cout<<num1+num2;
    return 0;
}
