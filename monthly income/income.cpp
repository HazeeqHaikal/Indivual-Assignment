#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    float monthlySalary = 900.00;
    float commision;
    string name;
    char itemType;
    int workers;

    cout << "\nEnter your name: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {
        if (i == 0) {
            name[i] = toupper(name[i]);
        } else if (name[i] == ' ') {
            name[i + 1] = toupper(name[i + 1]);
        }
    }

    cout << "A (TV)\nB (HiFi Set)\nC (Microwave)\nD (Washing Machine)\nE (Refrigerator)\n";
    cout << "Enter the item letter: ";
    cin >> itemType;
    itemType = toupper(itemType);
    switch (itemType) {
        case 'A':
            commision = 0.05;
            break;
        case 'B':
            commision = 0.08;
            break;
        case 'C':
            commision = 0.10;
            break;
        case 'D':
            commision = 0.13;
            break;
        case 'E':
            commision = 0.15;
            break;
        default:
            cout << "Invalid item type." << endl;
            commision = 0;
    }

    monthlySalary += (monthlySalary * commision);

    if (commision != 0) {
        cout << fixed << setprecision(2) << "\nMonthly income for " << name << " is RM" << monthlySalary << endl;
    }
    return 0;
}