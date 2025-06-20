#include <iostream>
using namespace std;
int main(){
    //getting user input
    float x1,x2,x3,y1,y2,y3;
    cout<<"value of x1: ";
    cin>>x1;
    cout<<"value of x2: ";
    cin>>x2;
    cout<<"value of x3: ";
    cin>>x3;
    cout<<"value of y1: ";
    cin>>y1;
    cout<<"value of y2: ";
    cin>>y2;
    cout<<"value of y3: ";
    cin>>y3;

    //slope between (x1,y1) and (x2,y2)
    float slope1;
    slope1 = (y2-y1)/(x2-x1);

    //slope between (x2,x3) and (y2,y3)
    float slope2;
    slope2 = (y3-y2)/(x3-x2);

    //checking if they lie on a straight line
    if (slope1 == slope2){
        cout<<"YES!! These points fall on a straight line";
    }
    else{
        cout<<"NO!! These points doesn't fall on staight line";
    }
}