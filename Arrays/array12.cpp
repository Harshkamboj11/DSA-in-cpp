// INSERTING ELEMENT AT A GUVEN POSITION (Done)

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    

    int index, newvalue;
    cout << "Enter the index you want to change: ";
    cin >> index;

    cout << "Enter the new value of the selected index: ";
    cin >> newvalue;

    if (index < n)
    {
        cout<<"Your new arrray is: ";
        arr[index] = newvalue;
        for (int i = 0; i < n; i++)
        {
            cout<< arr[i]<<" "<< endl;
        }
        
    }
    else
    {
        cout << "Enter a valid Index value!!!!";
    }
}