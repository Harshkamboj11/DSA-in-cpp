//REVERSE PYRAMIND STAR PATTERN

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=2;j<=i;j++){
            cout<<" ";
        }
        for (int k=n;k>=i;k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}