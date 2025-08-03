#include <iostream>
using namespace std;
int main(){
    //getting amount of purchase of shopping from user
    float amount;
    cout<<"Enter the amount of purchase: ";
    cin>>amount;

    int bill;
    int discount;

    //giving discount
    if (amount<1000){
        bill = amount;
    }
    else if (amount>=1000 && amount<5000){
        discount = amount*0.1;
        bill = amount - discount;
    }
    else if (bill>=5000){
        discount = amount*0.2;
        bill = amount - discount;
    }

    //final bill
    cout<<"Your final bill after discount is "<<bill<<"$";
}