#include <iostream>
#include <string>
using namespace std;
void sortAscending(int arr[], int n)
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
}

int main()
{
    int arr[] = {4, 2, 3, 6, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    sortAscending(arr, n);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}