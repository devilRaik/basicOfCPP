#include <iostream>
using namespace std;
// C++ have type control structure
// 1. Sequence Structure
// 2. Selection Structure
// 3. Loop Structure
int age;
int main()
{
    cout << "Enter you age here" << endl;
    cin >> age;
    // if ((age < 18) && (age>0))
    // {
    //     cout << "You are not aligible";
    // }
    // else if(age==18){
    //     cout<< "You are stil kid but you passed";
    // }
    // else if(age<1){
    //     cout<< "You are not born yet";
    // }
    // else{
    //     cout<<"You can join the party";
    // }
    switch (age)
    {
    case 10:
        cout << "You are not aligible";
        break;
    case 18:
        cout << "You are closer but still not eligible";
        break;
    case 22:
        cout << " You are teenage now you can join";
        break;
    default:
        cout << "This is a special character"<<endl;
        break;
    }
    cout<<"Switch is done";
    return 0;
}
