#include<iostream>
using namespace std;

void target_element(int arr[],int n,int target){
    bool found=false;
    for(int i=0;i<n;i++){
        if(target == arr[i]){
            found=true;
            break;
        }
    }

    if(found){
        cout<<"Target element is present in the given array.";
    }
    else{
        cout<<"Target element is not found in the array.";
    }
}

int main(){
    int arr[]={2,3,4,55,66,45,345,6547,96};
    int n=sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter the target value you want to search: ";
    cin>>target;

    target_element(arr,n,target);
}