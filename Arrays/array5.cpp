// SUM OF THE ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,45,3,5,6,7,9};
    int sum = 0;
    int n = sizeof(arr)/sizeof(int);

    for (int i=0;i<n;i++){
        sum += arr[i];
    }

    cout<<"Sum of all elements in the array is : "<<sum<<endl;

}