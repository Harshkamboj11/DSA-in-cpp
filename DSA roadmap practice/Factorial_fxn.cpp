#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }

    return fact;
}

int main(){
    int num;
    cout<<"Enter the number to get the factorial: ";
    cin>>num;

    cout<<"The factorial of the given number is "<<factorial(num)<<endl;

}