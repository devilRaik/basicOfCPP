#include<iostream>
using namespace std;

int main(){
    int marks[] = {23,55,66,23};

    int mathMarks[4];
    mathMarks[0] = 32;
    mathMarks[1] = 554;
    mathMarks[2] = 5655;
    mathMarks[3] = 662;
    
    // cout<<"These are mathMarks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
    // cout<<"These are marks"<<endl;
    // We can also change the values of array before the execution
    // marks[2]= 666;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of mathMarks: "<<mathMarks[i]<<endl;
    // }
    int i = 0;

    // Printing array values with the help of while loop
    // while(i<4)
    // {
    //     cout<<"The value of marks : "<<marks[i]<<endl;
    //     i++;
    // }

    // Printing value with the help of do-while loop
    // do
    // {
    //     cout<<"The value of Math Marks : "<<mathMarks[i]<<endl;
    //     i++;
    // } while (i<4);
    // Pointers and arrays
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*p;
    cout<<*(++p)<<endl;
    cout<<*p;
    // cout<<"The value of *p is "<<*p<<endl;  
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;  
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;  
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;  



    return 0;
} 