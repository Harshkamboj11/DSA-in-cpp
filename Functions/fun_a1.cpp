#include <iostream>
using namespace std;

double area(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double result = area(radius);

    cout << "The area of the circle is " << result << endl;

    return 0;
}
