#include<iostream>
using namespace std;

int sum_of_array(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int num[n];

    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>num[i];
    }

    cout<<"The sum of the given array is "<<sum_of_array(num,n)<<endl;
}