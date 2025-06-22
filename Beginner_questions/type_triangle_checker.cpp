#include <iostream>
using namespace std;
int main(){
    //taking sides of triangle as input
    float a,b,c;
    cout<<"Enter length of first side: ";
    cin>>a;
    cout<<"Enter length of second side: ";
    cin>>b;
    cout<<"Enter length of third side: ";
    cin>>c;

    //checking if these sides form triangle
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        if ((a == b) && (a == c)){
            cout<<"It will be an equilateral triangle";
        }
        else if ((a!=b) && (a!=c) && (c!=b)){
            cout<<"It will be a scalene triangle";
        }
        else {
            cout<<"It will be an isoceles triangle";
        }
    }
    else{
        cout<<"GIVEN SIDES WILL NOT FORM ANY TRIANGLE!!";
    }
}