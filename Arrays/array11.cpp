// CHECKING IF ARRAY IS SORTED  (done)

#include<iostream>
using namespace std;
int main(){
    int arr[]={7,6,5,74,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    bool sorted = true;

    for (int i=0;i<n-1;i++){
        if (arr[i+1]<arr[i]){
            sorted = false;
            break;
        }
    }

    if (sorted){
        cout<<"The given array is sorted....";
    }
    else{
        cout<<"The given array is not sorted....";
    }


    return 0;
}