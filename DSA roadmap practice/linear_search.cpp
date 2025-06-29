#include<iostream>
using namespace std;

bool find_element(int arr[],int size,int target){
    //looping through the array search the terget element
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 1; //if found the target element 
        }
    }
    
    return 0; //if not found the target element 
}

int main(){
    int num[7]={3,4,2,33,44,5,6};
    cout<<"Enter the value of element you want to search: ";
    int find;
    cin>>find;
    
    bool found = find_element(num,7,find);

    if(found){
        cout<<"Yes,the target element is present in the given array....";
    }
    else{
        cout<<"No,the given array is not present....";
    }
}