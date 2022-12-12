#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    char customerType;
    float billAmount, billFee, serviceFee, premiumChannel, basicService;
    string accountNumber;
    float firstTen, extra;

    cout << "Enter your account number: ";
    cin >> accountNumber;

    cout << "Residential (R)\nBusiness (B)\nEnter your customer type: ";
    cin >> customerType;
    customerType = toupper(customerType);

    cout << "Enter the amount of your premium channels: ";
    cin >> premiumChannel;

    if (customerType == 'R') {
        billFee = 4.5;
        serviceFee = 20.5;
        premiumChannel *= 7.5;
    } else if (customerType == 'B') {
        cout << "Enter the number of basic service connections: ";
        cin >> basicService;
        billFee = 15.0;
        if (basicService <= 10) {
            serviceFee = 7.5 * basicService;
        } else {
            firstTen = 7.5 * 10;
            extra = basicService - 10;
            serviceFee = firstTen + (extra * 5.0);
        }
        premiumChannel *= 50.0;
    } else {
        cout << "Invalid customer type" << endl;
    }

    billAmount = billFee + serviceFee + premiumChannel;
    cout << "\nAccount number: " << accountNumber << endl;
    cout << fixed << setprecision(2) << "Bill amount: RM" << billAmount << endl;

    return 0;
}