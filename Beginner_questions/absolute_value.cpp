#include <iostream>
using namespace std;
int main(){
    //taking input from user
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    //making it a absolute value
    if (num<0){
        cout<<"Absolute value: "<<-(num)<<endl;
    }
    else{
        cout<<"Absolute value: "<<num<<endl;
    }
}