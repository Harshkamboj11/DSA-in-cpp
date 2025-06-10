#include <iostream>
using namespace std;
int main(){
    float celcius;
    cout<<"Enter the temperature in celcius: "; 
    cin>>celcius; //get input from the user as celcius

    float formula = ((1.8*celcius)+32); //formula to convert celcius to fahrenheit

    cout<<""<<endl;
    cout<<celcius<<" degree celcius in Fahrenheit is "<<formula;

}