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

    cout << "Enter how many workers you have: ";
    cin >> workers;

    for (int i = 0; i < workers; i++) {
        cin.ignore();
        cout << "\nEnter your name: ";
        getline(cin, name);
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
                return 0;
        }
        cout << fixed << setprecision(2) << "\nMonthly income for " << name << " is RM" << monthlySalary + (monthlySalary * (float)commision) << endl;
    }

    return 0;
}