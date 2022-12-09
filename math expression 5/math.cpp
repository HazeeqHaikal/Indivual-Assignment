#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int P, Q, R, S;
    cout << "Enter P value: ";
    cin >> P;

    cout << "Enter Q value: ";
    cin >> Q;

    cout << "Enter R value: ";
    cin >> R;

    cout << "Enter S value: ";
    cin >> S;

    float M = (((4.0 * P) / (Q + R)) - (2 * S * 3));
    cout << "M: " << M << endl;

    return 0;
}