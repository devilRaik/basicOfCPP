#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
void initCounter(void) { counter = 0;}
void setPrice(void);
void displayPrice(void);
}s;

void Shop :: setPrice(void){
    cout<<"Enter Id of your item no"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Id of your item Price"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item With id"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    return 0;
}