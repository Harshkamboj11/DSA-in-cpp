#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {1, 2, 3, 4, 5, 6, 7};
    int size = num.size();

    int even = 0;
    int odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            even += num[i];
        }
        else
        {
            odd += num[i];
        }
    }

    cout << "The difference between even indices to odd indices is: " << even - odd << endl;
}