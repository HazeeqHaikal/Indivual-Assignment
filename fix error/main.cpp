#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    cout << "Enter the name of the employee: ";
    getline(cin, employeeName);

    int yearStart;
    cout << "Enter the year you started working here: ";
    cin >> yearStart;

    int yearService = 2022 - yearStart;
    cout << endl
         << employeeName << ", you have been working here for " << yearService << " years." << endl;
    cout << "Thank you for your service." << endl;
}
