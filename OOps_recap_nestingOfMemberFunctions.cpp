/**
 * OOPs - Classes and Objects
 *
 * C++ --> initially called --> C with classes by stroustroup
 * Class --> extension of structures (in c)
 * Structures had limitations
 *      a. Members are public
 *      b. No methods
 * Classes --> structures + more
 * Classes --> can have methods and properties
 * CLasses --> can make few members as private & few as public
 * Structures in C++ are typedefed
 * You can declare object along with the class declaration
 *
 *      class Employee{
 *          Class definition
 *      } dev, devil, litthf;
 *      dev.salary = 8 makes no sense if salary is private
 */

// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    // bool chk_bin(void);
    void chk_bin(void);
    void once_compliment(void);
    void display(void);
} bin;

void binary ::read(void)
{
    cout << "Enter the Number to check Binary : "<<endl;
    cin >> s;
    cout<<endl;
}

// bool binary :: chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect binary number" << endl;
//             return false;
//         }
//     }
//     return true;
    
// }

void binary ::chk_bin(void)
{
    bool isValid = false;

    while (!isValid) // Loop until a valid binary number is entered
    {
        isValid = true; // Assume input is valid

        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect binary number, try again." << endl <<endl;
                read(); // Ask for the number again
                isValid = false; // Input is not valid
                break; // Exit the for loop to check the new input
            }
        }
    }

    cout << "Correct binary number entered: " << s << endl; // Print the valid binary number
}

void binary ::once_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaing your once_compliment binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    bin.read();
    // bool inValid = false;
    // while(!inValid){
    //     bin.read();
    //     inValid = bin.chk_bin();
    // }
    // cout<<"Valid binary Entered!"<<endl;
    // bin.chk_bin();
    bin.once_compliment();
    bin.display();
    return 0;
}


