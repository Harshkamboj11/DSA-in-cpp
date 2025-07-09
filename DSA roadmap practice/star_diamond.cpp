#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number of rows u need: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j=n-1;j>=1;j--){
        for(int l=1;l<=n-j;l++){
            cout<<" ";
        }
        for(int m=1;m<=2*j-1;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}