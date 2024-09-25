#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the id : "<<endl;
        cin>>id;
        count++;
    }

    void getData(void){
        cout<<"The id of this employee is : "<<id<<" and this is employee number "<<count<< endl;
    }
    // this is a static method what can only use static variable or other static function
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count;// Default value is 0

int main(){
    Employee a, b, c;
    // a.id = 1;
    // a.count=1; // cannot do this as id and count are private

    a.setData();
    a.getData();
    Employee::getCount();
    // We can call the static function without creating object
    
    b.setData();
    b.getData();
    Employee::getCount();
    
    c.setData();
    c.getData();
    Employee::getCount();
    return 0;
}