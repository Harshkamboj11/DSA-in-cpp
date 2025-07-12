#include<iostream>
using namespace std;

int sum(int a,int b){
    int *x = &a;
    int *y = &b;

    int sum = *x + *y;

    return sum;
}

int main(){
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;

    cout<<"The sum of both the numbers is "<<sum(x,y)<<endl;
}