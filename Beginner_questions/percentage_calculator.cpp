#include <iostream>
using namespace std;
int main(){
    float sub1,sub2,sub3,sub4,sub5;
    cout<<"Marks in first subject(out of 100): ";
    cin>>sub1;

    cout<<"Marks in second subject(out of 100): ";
    cin>>sub2;

    cout<<"Marks in third subject(out of 100): ";
    cin>>sub3;

    cout<<"Marks in fourth subject(out of 100): ";
    cin>>sub4;

    cout<<"Marks in fifth subject(out of 100): ";
    cin>>sub5;
    cout<<" "<<endl;
    float percentage = (sub1+sub2+sub3+sub4+sub5)/5;
    cout<<"Percentage obtained in 5 subjects= "<<percentage<<"%";

}