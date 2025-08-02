#include <iostream>
using namespace std;
int main(){
    //taking bill units from the user 
    float units;
    cout<<"Enter the number of units consumed: ";
    cin>>units;

    double bill;

    //calculating bill for diff. units
    if (units<=100 && units>0){
        bill = (units*=1.5);
    }
    else if (bill>100 && bill<=200){
        bill = (100*1.5) + ((units -100)*2.00);

    }
    else if (bill>200){
        bill = (100*1.5) + (200*2.00) + ((units-200)*3.00);
    }
    cout<<"Your total bill is: "<<bill;
}