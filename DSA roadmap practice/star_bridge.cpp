#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int j=2;j<=2*i-1;j++){
            cout<<" ";
        }
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}