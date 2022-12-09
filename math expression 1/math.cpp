#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int k, A, L, t1, t2;

    cout << "Enter k value: ";
    cin >> k;

    cout << "Enter A value: ";
    cin >> A;

    cout << "Enter L value: ";
    cin >> L;

    cout << "Enter t1 value: ";
    cin >> t1;

    cout << "Enter t2 value: ";
    cin >> t2;

    float q = 1.0 * ((k * A) * (t1 - t2)) / L;
    cout << "q: " << q << endl;
    return 0;
}