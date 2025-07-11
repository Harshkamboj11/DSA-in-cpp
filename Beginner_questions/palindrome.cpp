#include <iostream>
using namespace std;

int main()
{
    int number, originalNumber, reversedNumber = 0, lastDigit;

    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;

    while (number != 0)
    {
        lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number = number / 10;
    }
    if (originalNumber == reversedNumber)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
}