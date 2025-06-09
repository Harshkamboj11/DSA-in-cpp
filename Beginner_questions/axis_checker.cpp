#include <iostream>
using namespace std;
int main(){
    //taking x and y axis as input
    float x,y;
    cout<<"Enter the value of x-axis: ";
    cin>>x;
    cout<<"Enter the value of y-axis: ";
    cin>>y;
    
    //checking where these points lies
    
    if (x == 0 && y == 0){
        cout<<"They lies on the origin";
    }
    else if (x == 0){
        cout<<"They lie on y-axis";
    }
    else if (y == 0){
        cout<<"They lie on x-axis";
    }
    else {
        cout<<"They lie on both the axis";
    }
}