//LINEAR SEARCH

#include <iostream>
using namespace std;
 
int linearsearch(int arr[] , int size , int target){
    for (int i=0;i<=size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size,target; //size of array
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size]={};
    for (int i=0;i<=size;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<"Enter the target value u want to search in the array: ";
    cin>>target;

    int ans = linearsearch(arr,size,target);

    cout<<"The given target is at the index: "<<ans<<endl;
}