#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=40; i++)
    {
        if(i==2){
            continue;
        }
        // if(i==2){
        //     break;;
        // }
        cout<<i<<endl;
    }
    
    return 0;
}