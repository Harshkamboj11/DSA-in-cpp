#include <iostream>
using namespace std;
int main(){
    //arithmetic operators
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<""<<endl;
    
    int sum = a+b; //addition
    cout<<"Sum of a and b is "<<sum<<endl;

    int difference = a-b; //subtraction
    cout<<"difference of a and b is "<<difference<<endl;

    int product = a*b; //multiplication
    cout<<"product of a and b is "<<product<<endl;

    int by = a/b; //divide
    cout<<"divison of a and b is "<<by<<endl;

    int modulus = a+b; //modulus
    cout<<"modulus of a and b is "<<modulus<<endl;
    cout<<""<<endl;

    //relational operator
    int c,d;
    cout<<"Enter the value of c: ";
    cin>>c;
    cout<<"Enter the value of d: ";
    cin>>d;

    bool less_than = (c<d); //less than
    cout<<less_than<<endl;

    bool greater_than = (c>d); //greater than
    cout<<greater_than<<endl;

    bool lt_equalto = (c<=d); //less than or equal to
    cout<<lt_equalto<<endl;

    bool gt_equalto = (c>=d); //greater than or equal to 
    cout<<gt_equalto<<endl;

    bool equal_equal_to = (c==d); //equals to 
    cout<<equal_equal_to<<endl;

    bool not_equal = (c!=d); //not equal to
    cout<<not_equal<<endl;
    cout<<""<<endl;

    //logical operator
    int e,f;
    cout<<"Enter the value of e: ";
    cin>>e;
    cout<<"Enter the value of f: ";
    cin>>f;

    bool logical_and = (e<f && e>f); //logical and
    cout<<logical_and<<endl;

    bool logical_or = (e<f || e>f); //logical or 
    cout<<logical_or<<endl;

    bool logical_not = (e!=f); //logical not
    cout<<logical_not<<endl;
    cout<<""<<endl;
    
    return 0;

}