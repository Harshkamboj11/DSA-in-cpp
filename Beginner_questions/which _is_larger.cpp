#include<iostream>
using namespace std;
int main(){
    //getting radius from the user
    float radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    //finding circumference
    float circumference;
    circumference = 2*3.14*radius;
    
    //finding area
    float area;
    area = 3.14*radius*radius;

    //program to check which one is greater
    if (circumference>area){
        cout<<"Circumference of the given circle of radius "<<radius<<" is greater";
    }
    else{
        cout<<"Area of the given circle of radius "<<radius<<" is greater";
    }
}