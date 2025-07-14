#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    swap(a,b);
    cout<<"Now,The value of a and b is "<<a<<" and "<<b<<" respectively";
    
}