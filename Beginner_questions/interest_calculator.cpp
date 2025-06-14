#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    
    //taking user's input
    cout<<"Enter principal value: ";
    cin>>principal;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;

    float interest_rate = (principal*rate*time)/100;
    cout<<"Interest rate opn the given value is: "<<interest_rate;


}