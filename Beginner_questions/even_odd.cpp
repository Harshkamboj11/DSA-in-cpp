#include<iostream>
using namespace std;
int main(){
    //takes input from the user
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<""<<endl;
    
    //checking for even or odd
    if (num>0){
        if (num%2 == 0){
            cout<<num<<" is even."<<endl;
        }
        else{
            cout<<num<<" is odd."<<endl;
        }
    }
    else{
        cout<<"ENTER A POSTIVE INTERGER....";
    }

}