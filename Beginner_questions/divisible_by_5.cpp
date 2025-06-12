#include <iostream>
using namespace std;
int main(){
    //takes input from the user
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<""<<endl;

    if (num>0){
        if(num%5 == 0){
            cout<<"YES!! "<<num<<" is divisible by 5";
        }
        else{
            cout<<"NO!! "<<num<<" is not divisible by 5";
        }
    }
    else{
        cout<<"ENTER A POSITIVE INTERGER!!";
    }

}