#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u neeed: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
            cout<<"*";
        }
        for (int l=n-1;l>=i;l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}