#include<iostream>
using namespace std;
int main(){
    //taking length and breadth from user
    float l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;

    //area of reatangle
    float area;
    area = l*b;

    //perimeter of rectangle
    float perimeter;
    perimeter = 2*(l+b);

    //checking which is greater
    if (area>perimeter){
        cout<<"Area of the given rectangle is greater";
    }
    else if (area<perimeter){
        cout<<"Perimeter of the given rectangle is greater";
    }
    
}