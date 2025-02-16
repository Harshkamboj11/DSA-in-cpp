//MAXIMUM OF THE ARRAY

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {34,56,44,7,8,99,100,567};
    int size = sizeof(num)/sizeof(int);

    int largest = INT_MIN;

    for (int i=0;i<size;i++){
        if (num[i]>largest){
            largest = num[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
}