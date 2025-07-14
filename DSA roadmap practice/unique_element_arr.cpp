#include<iostream>
using namespace std;

int unique_element(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int array[]={1,2,3,1,2,3,5};
    int n=7;

    cout<<"The unique element int he given array is "<<unique_element(array,n)<<endl;
}