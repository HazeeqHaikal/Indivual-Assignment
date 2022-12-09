#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int P;
    cout << "Enter P value: ";
    cin >> P;

    float Q = 3.86 * sqrt(P) * (1 - (0.01 * sqrt(P)));

    cout << "Q: " << Q << endl;

    return 0;
}