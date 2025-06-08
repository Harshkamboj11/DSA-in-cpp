#include<iostream>
using namespace std;
int main(){
    float radius;

    //taking user input
    cout<<"Enter the value of radius of circle: ";
    cin>>radius;

    //formula
    float area = 3.14*radius*radius;

    //output
    cout<<"The area of the given circle of radius "<<radius<<" is "<<area;

}