// COUNTING OCCURENCE OF ELEMENT IN AN ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,5,6,66,6,6,6,6,6};
    int target = 6;
    int n=sizeof(arr)/sizeof(int);
    int count =0;

    for (int i=0;i<n;i++){
        if(arr[i]==target){
            count += 1;
        }
    }
    cout<<count;
}   