#include<iostream>
using namespace std;
int main(){
    //taking input from user
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if (num%3==0 && num%5==0){
        cout<<"The given number is divisible by both 3 and 5.";
    }
    else{
        cout<<"The number is not divisible by both 3 and 5.";
    }
}