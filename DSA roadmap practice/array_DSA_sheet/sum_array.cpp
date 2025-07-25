#include<iostream>
using namespace std;

int SumOfArray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    return sum;
}


int main(){
    int num[]={1,2,3,4,5,6,7};
    int n=sizeof(num)/sizeof(int);

    cout<<"The sum of the elements in the array is "<<SumOfArray(num,n)<<endl;
    return 0;   
}