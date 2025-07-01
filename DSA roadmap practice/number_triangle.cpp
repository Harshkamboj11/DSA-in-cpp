#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            int num = 0;
            cout<<num+j;
        }
        cout<<endl;
    }
    return 0;
}