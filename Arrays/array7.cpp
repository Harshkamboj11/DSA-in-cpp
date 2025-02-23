// SWAPING MAX AND MINIMUM OF THE ARRAY

#include <iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={45,55,6,2,3,67,8};
    int n = sizeof(arr)/sizeof(n);

    int ans1 = INT_MAX;
    int ans2 = INT_MIN;

    for (int i=0;i<n;i++){
        if(arr[i]<ans1){
            ans1 = arr[i];
        }
    }
    for (int j=0;j<n;j++){
        if(arr[j]>ans2){
            ans2 = arr[j];
        }
    }

    cout<<ans1<<" "<<ans2<<endl;

    swap(ans1,ans2);

    cout<<ans1<<" "<<ans2<<endl;
}