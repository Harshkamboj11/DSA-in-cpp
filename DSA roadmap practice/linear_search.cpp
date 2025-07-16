#include<iostream>
#include<vector>
using namespace std;

bool find_element(vector<int> arr, int target) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return 1;
        }
    }
    return 0;
}

void inputArray(vector<int> &arr) {
    int size;
    cout << "Enter the number of elements to insert: ";
    cin >> size;

    int element;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element; 
        arr.push_back(element);
    }
}

int main() {
    vector<int> num;
    inputArray(num);

    cout << "Enter the value of element you want to search: ";
    int find;
    cin >> find;

    bool found = find_element(num, find);

    if (found) {
        cout << "Yes, the target element is present in the given array....";
    } else {
        cout << "No, the given array is not present....";
    }
}
