#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            int num = k+1-1;
            cout<<num;
        }
        for (int l=2;l<=i;l++){
            int num = l-1;
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}