// PRODUCT OF THE ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,8,9,10};
    int product = 1;
    int n = sizeof(arr)/sizeof(int);

    for (int i=0;i<n;i++){
        product *= arr[i];
    }

    cout<<"Proudut of the element of the given array is: "<<product<<endl;
}