#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {4, 5, 1, 2, 0, 4, 5, 2};
    int size = vec.size();
    int non_repeat = -1;

    for (int i = 0; i < size; i++) {
        bool isRepeated = false;
        for (int j = 0; j < size; j++) {
            if (i != j && vec[i] == vec[j]) {
                isRepeated = true;
                break;
            }
        }
        if (!isRepeated) {
            non_repeat = vec[i];
            break;  // Break when the first non-repeating element is found
        }
    }

    if (non_repeat != -1)
        cout << "First non-repeating element in the array is: " << non_repeat << endl;
    else
        cout << "No non-repeating element found." << endl;

    return 0;
}
