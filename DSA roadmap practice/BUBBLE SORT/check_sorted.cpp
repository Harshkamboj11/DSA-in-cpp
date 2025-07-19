#include <iostream>
using namespace std;

//Function to sort the array if not sorted
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//Function to print the array 
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//Main function
int main()
{
    int arr[] = {4, 1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    bool sorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
    {
        cout << "The array is already sorted: ";
        printArray(arr, n);
    }
    else
    {
        cout << "The given array is not sorted..." << endl;
        cout << "Sorting........" << endl;
        cout << "The sorted array is: ";
        sort(arr, n);
    }

    return 0;
}