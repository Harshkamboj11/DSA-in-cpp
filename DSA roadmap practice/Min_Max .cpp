#include<iostream>
#include<climits>
using namespace std;

int Maxvalue(int arr[],int n){
    int max = INT_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int Minvalue(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min = num[i];
        }
    }

    return min;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int array[size];
    for(int i=0;i<size;i++){
        cout<<"Input the value "<<i<<" in the array: ";
        cin>>array[i];
    }

    cout<<endl;
    cout<<"Maximum element of the array is: "<<Maxvalue(array,size)<<endl;
    cout<<"Minimum element of the array is: "<<Minvalue(array,size)<<endl;

}