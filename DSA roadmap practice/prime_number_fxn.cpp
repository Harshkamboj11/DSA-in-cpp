#include<iostream>
using namespace std;

void primecheck(int n){
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<"The number is not prime.";
            break;
        }
        else{
            cout<<"The number is prime.";
            break;
        }
    }
    
}

int main(){
    int num;
    cout<<"Enter the number to check either its prime or not: ";
    cin>>num;

    primecheck(num);
    
}