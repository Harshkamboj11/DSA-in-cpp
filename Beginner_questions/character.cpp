#include <iostream>
using namespace std;
int main(){
    //getting input from user
    char character;
    cout<<"Enter any alphabet: ";
    cin>>character;

    //checking if it is alphabet or not 
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        cout<<"The given is an alphabet.";
    }
    else{
        cout<<"The given is not an alphabet.";
    }
}