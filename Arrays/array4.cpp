#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    while (start<end){
        for (int start = 0;start<=size;start++){
            for (int end = size;endl>=0;end--){
                swap(arr[start],arr[end]);
            }
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int array[size] = {};

    for (int i=0;i<=size;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }

    cout<<"Your reversed array is "<<reverse(arr,size)<<endl;


}