#include <iostream>
using namespace std;
int main(){
        int initial_bal;
        int option;

        //getting input from the user
        cout<<"Enter the initial balance: ";
        cin>>initial_bal;

        cout<<""<<endl;
        cout<<"-----MENU-----"<<endl;
        cout<<"1. Check balance.."<<endl;
        cout<<"2. Deposit money.."<<endl;
        cout<<"3. Withdraw money.."<<endl;
        cout<<"4. Exit..."<<endl;

        //getting option from user
        cout<<"Enter your choice: ";
        cin>>option;
        cout<<""<<endl;


        if (option == 1){
            cout<<"Your current balance is "<<initial_bal<<endl;
        }
        else if (option == 2){
            int deposit;
            cout<<"Enter the amount you want to deposit: ";
            cin>>deposit;
            initial_bal += deposit;
            cout<<"Your new balance is "<<initial_bal<<endl;
        }
        else if (option == 3){
            int withdraw;
            cout<<"Enter the amount you want to withdraw: ";
            cin>>withdraw;
            if (withdraw<=initial_bal){
                initial_bal -= withdraw;
                cout<<"Your new balance is "<<initial_bal<<endl;
            }
            else{
                cout<<"WITHDRAWL AMOUNT SUCCEDDED.!!!"<<endl;
            }
        }
        else if (option == 4){
            cout<<"exiting....."<<endl;
        }
        else{
            cout<<"Enter a valid option..."<<endl;
        }
        cout<<"THANK YOU...."<<endl;
}