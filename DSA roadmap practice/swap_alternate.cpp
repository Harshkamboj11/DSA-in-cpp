#include<iostream>
using namespace std;

void swap_alternate(int arr[],int n){
    
    int start = 0;
    int end = 1;
    while(end<n){
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;

    swap_alternate(arr,n);
}