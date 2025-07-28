//TO FIND THE LENGTH OF THE STRING 

#include<iostream>
using namespace std;

int stringlength(char *str){
    int length = 0;
    while (*str != '\0'){
        length ++;
        str ++;

    }
    return length;
}
int main(){
    char str[]="Harsh";

    cout<<"The lenghth of the string is: "<<stringlength(str)<<endl;
}