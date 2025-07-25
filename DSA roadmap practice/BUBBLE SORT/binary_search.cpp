#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sortAscending(vector<int> &arr, int n)
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

void binarysearch(vector<int> &arr, int x, int first, int last)
{
    while (first <= last)
    {
        int mid = first + (last - first) / 2;

        if (x == arr[mid])
        {
            cout << "Element is found at: " << mid << endl;
            return;
        }

        if (x > arr[mid])
            first = mid + 1;

        else
            last = mid - 1;
    }

    cout << "Element is not found in the array.";
}

void inputArray(vector<int> &arr)
{
    int n;
    cout << "Enter the number of elements you want in the array: ";
    cin >> n;

    int ele;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
}

int main()
{
    vector<int> arr;
    inputArray(arr);
    int x;
    cout << "Enter the number you want to search in the array: ";
    cin >> x;

    sortAscending(arr, arr.size());
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    binarysearch(arr, x, 0, arr.size() - 1);
    
    return 0;
}