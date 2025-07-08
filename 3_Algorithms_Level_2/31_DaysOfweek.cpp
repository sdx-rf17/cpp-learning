#include <iostream>
using namespace std;

enum enDaysOfWeek {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, friday, Saturday};

int main() {
    cout << "*** days of week ***\n";
    cout << "(1) Sunday\n";
    cout << "(2) Monday\n";
    cout << "(3) Tuesday\n";
    cout << "(4) Wednesday\n";
    cout << "(5) Thursday\n";
    cout << "(6) Friday\n";
    cout << "(7) Saturday\n";

    int choice;
    cout << "Enter your choice\n:";
    cin >> choice; 
    enDaysOfWeek day = (enDaysOfWeek)choice;

    switch (day) {
        case Sunday:
            cout << "Sunday";
            break;
        case Monday:
            cout << "Monday";
            break;
        case Tuesday:
            cout << "Tuesday";
            break;
        case Wednesday:
            cout << "Wednesday";
            break;
        case Thursday:
            cout << "Thursday";
            break;
        case friday:
            cout << "Friday";
            break;
        case Saturday:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid choice";
            break;
    }
}
