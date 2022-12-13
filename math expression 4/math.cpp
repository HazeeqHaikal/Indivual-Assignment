#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cout << "Enter a value: ";
    cin >> a;

    cout << "Enter b value: ";
    cin >> b;

    float y = (a - sqrt(b)) / (2 * pow(a, 2) - 3 * a * b);
    cout << "y: " << y << endl;
    return 0;
}