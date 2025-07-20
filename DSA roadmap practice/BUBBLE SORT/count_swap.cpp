#include <iostream>
using namespace std;
int count_swap(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                count++;
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return count;
}

int main()
{
    int arr[] = {4, 2, 3, 6, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << "The total no. of swaps in the array is/are " << count_swap(arr, n);
    return 0;
}