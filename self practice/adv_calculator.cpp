#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    char operation;
    cout<<"Enter the operation(+,-,*,%,/): ";
    cin>>operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%'){
        if (operation == '+'){
        cout<<"Sum: "<<a+b<<endl;
        }
        else if (operation == '-'){
        cout<<"Difference = "<<a-b<<endl;
        }
        else if (operation == '*'){
        cout<<"product = "<<a*b<<endl;
        }
        else if (operation == '/'){
                if (b>0){
                    cout<<"Divison: "<<a/b<<endl;
                }
                else {
                    cout<<"ERROR.....";
                }
            }
        else if (operation == '%'){
            if (b>0){
                cout<<"Modulus: "<<a%b<<endl;
            }
            else{
                cout<<"ERROR.....";
            }
        }
        
    }
    else {
        cout<<"INVALID OPERATOR....."<<endl;
    }
}