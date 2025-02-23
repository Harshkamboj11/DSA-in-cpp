// PRINTING UNIQUES VALUE IN AN ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,2,3,4,3};
    int n = sizeof(arr)/sizeof(int);
    int num1,num2;

    for (int i=0;i<n;i++){
        num1 = arr[i];
    }

    for (int j=0;j<n;j++){
        num2 = arr[j];
    }

    if (num1 != num2){
        cout<<"Unique value of the array is: "<<num1;
    }

    
}