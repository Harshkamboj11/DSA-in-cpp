#include <iostream>
using namespace std;
int main(){
    //pre-defined password
    string pass;
    pass = "mmdu123";

    //getting user's password guess 
    string your_pass;
    cout<<"Enter the password: ";
    cin>>your_pass;

    //checking if it's correct
    if (your_pass == pass){
        cout<<"ACCESS GRANTED....."<<endl;
    }
    else {
        cout<<"WRONG PASSWORD....."<<endl;
    }
}