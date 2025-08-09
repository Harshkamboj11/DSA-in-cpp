#include<iostream>
using namespace std;

void sum(int *a,int *b){
    int &x = *a;
    int &y = *b;

    int sum = &x+&y;
}

int main(){
    int a,b;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    // sum(&a,&b);

    cout<<"The sum of both the numbers is: "<<sum(a,b)<<endl;

}