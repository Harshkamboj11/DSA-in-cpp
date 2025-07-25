#include<iostream>
#include<climits>
using namespace std;

int max_value(int arr[],int n){
    int max = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int num[]={22,3332,1,2,3,53,67,88};
    int n = sizeof(num)/sizeof(int);

    cout<<"Max value in the given array is "<<max_value(num,n)<<endl;
}