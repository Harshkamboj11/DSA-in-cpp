#include<iostream>
using namespace std;
int main(){
    //getting input from user to check either the given number is 3 digit or not
    int num;
    cout<<"Enter the number(1 to 999): ";
    cin>>num;

    //checking
    float checker;
    checker = num/100;

    if (checker>=1){
        cout<<"The given number is of 3 digits.";
    }
    else{
        cout<<"The given number is not of 3 digit.";
    }

}