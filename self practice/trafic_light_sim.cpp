#include <iostream>
using namespace std;
int main(){

    //getting color as input from user
    string color;
    cout<<"Enter the color of the light (red,yellow,green): ";
    cin>>color;

    if (color == "red" || color == "yellow" || color == "green"){
        if (color == "red"){
            cout<<"STOP!!";
        }
        else if (color == "yellow"){
            cout<<"SLOW DOWN!!";
        }
        else if (color == "green"){
            cout<<"GO!!";
        }
    }
    else{
        cout<<"ENTER A VALID COLOR!!!";
        }
}