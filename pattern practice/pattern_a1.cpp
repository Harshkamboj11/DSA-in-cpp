#include <iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n-2;i++){
        for (int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}