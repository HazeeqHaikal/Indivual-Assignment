#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    char membership;
    char cupSize;
    char specialCode;
    float price = 0.00;

    cout << "Do you have membership? Yes(Y) or No (N): ";
    cin >> membership;
    membership = toupper(membership);

    cout << "What are your desired cup size? Medium(M) or Large(L): ";
    cin >> cupSize;

    cupSize = toupper(cupSize);

    cout << "Enter the special code: ";
    cin >> specialCode;
    specialCode = toupper(specialCode);

    if (cupSize == 'M' && membership == 'Y') {
        price = 18.00;
    } else if (cupSize == 'L' && membership == 'Y') {
        price = 20.00;
    } else if (cupSize == 'M' && membership != 'Y') {
        price = 22.00;
    } else if (cupSize == 'L' && membership != 'Y') {
        price = 25.00;
    } else {
        cout << "Invalid cup size." << endl;
    }

    if (specialCode == 'T') {
        price = price - (price * 0.10);
    }
    if (price != 0.00) {
        cout << fixed << setprecision(2) << "Price: RM" << price << endl;
    }

    return 0;
}