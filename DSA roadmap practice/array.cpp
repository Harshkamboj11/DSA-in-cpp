#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int num[]={1,3,4,5};
    printArray(num,5);
    cout<<sizeof(num)/sizeof(int);
}