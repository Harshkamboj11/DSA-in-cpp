#include<iostream>
using namespace std;
int main(){
    //taking 3 numbers as input from user
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    //code to check greatest of them
    if (a>b && a>c){
        cout<<a<<" is greater";
    }
    else if (b>a && b>c){
        cout<<b<<" is greater";
    }
    else if (c>a && c>b){
        cout<<c<<" is greater";
    }

}