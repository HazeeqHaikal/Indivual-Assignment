#include <math.h>

#include <iostream>
#include <string>

using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    float Population = 3.2 * (1 + (exp(0.01 * (year - 2000))));

    cout << "Population: " << Population << endl;

    return 0;
}