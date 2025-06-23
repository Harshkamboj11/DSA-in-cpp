#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows u need: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            char alpha = 'A' + j - 1;
            cout<<alpha;
        }
        cout<<endl;
    }
    return 0;
}