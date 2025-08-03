#include <iostream>
using namespace std;
int main(){
    //taking amount of currency user want to convert
    double ind_currency;
    cout<<"Enter the amount in Indian rupees: ";
    cin>>ind_currency;

    //getting the user's choice
    string currency;
    cout<<"In which currency you want to convert (USD,EUR,GBP): ";
    cin>>currency;

    //making conditions to convert indian rupees to selected currency
    if (currency == "USD" || currency == "EUR" || currency == "GBP"){
        if (currency == "USD"){
            double convert;
            convert = 0.012*ind_currency;
            cout<<ind_currency<<" rupees to USD is "<<convert<<"$"<<endl;
        }
        else if (currency == "EUR"){
            double convert2;
            convert2 = 0.011*ind_currency;
            cout<<ind_currency<<" rupees to EUR is "<<convert2<<"$"<<endl;
        }
        else if (currency == "GBP"){
            double convert3;
            convert3 = 0.0090*ind_currency;
            cout<<ind_currency<<" rupees to GBP is "<<convert3<<" pound"<<endl;
        }
    }
    else{
        cout<<"ENTER A VALID CONVERTING UNIT......"<<endl;
    }
}