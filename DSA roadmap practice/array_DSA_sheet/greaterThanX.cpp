#include<iostream>
using namespace std;

void target(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]>element){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,-4,55};
    int n = sizeof(arr)/sizeof(int);
    int element;
    cout<<"Enter the target value: ";
    cin>>element;

    target(arr,n,element);
}