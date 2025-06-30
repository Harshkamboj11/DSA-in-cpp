#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            int num=1;
            num+=i;
            cout<<num;

        }
        cout<<endl;
    }
}