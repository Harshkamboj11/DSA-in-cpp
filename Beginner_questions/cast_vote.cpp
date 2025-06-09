#include<iostream>
using namespace std;
int main(){
    //telling user if he/she can cast a vote
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<""<<endl;

    if (age>=18){
        cout<<"You are eligible for voting.";
    }
    else if (age<=0){
        cout<<"Enter a valid age.";
    }
    else{
        cout<<"You are not eligible for voting.";
    }

}