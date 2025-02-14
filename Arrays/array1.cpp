//MINIMUM OF THE ARRAY

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int num[]={34,45,33,66,67,55,678,0,-45};
    int size=sizeof(num)/sizeof(int);

    int smallest = INT_MAX;

    for (int i=0;i<size;i++){
        if (num[i]<smallest){
            smallest = num[i];
        }
    }

    cout<<"smallest = "<<smallest<<endl;
}