//REVERSING AN ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<n;i++){
        for (int j=n;j>=0;j--){
            if (i<j){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[i]=temp;
            }
            
        }
        cout<<arr[i];
    }

   
}