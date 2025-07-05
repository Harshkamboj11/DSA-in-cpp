#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size = 6;
    reverse(arr,size); 

}