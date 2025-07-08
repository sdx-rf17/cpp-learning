#include <iostream>
using namespace std;

enum enDaysOfWeek {Sunday = 1, Monday, Tuesday, Wednesday, Thursday, friday, Saturday};

void ShowWeekDayMenue() {

    cout << "*** days of week ***\n";
    cout << "(1) Sunday\n";
    cout << "(2) Monday\n";
    cout << "(3) Tuesday\n";
    cout << "(4) Wednesday" << endl;
    cout << "(5) Thursday\n";
    cout << "(6) Friday\n";
    cout << "(7) Saturday\n";
    cout << "********************" << endl;
    cout << "Enter your choice\n:";
}

enDaysOfWeek ReadWeekDay() {

    int choice;
    cin >> choice; 
    return (enDaysOfWeek)choice;

}    

string setWeekDayName(enDaysOfWeek day) {

        switch (day) {
        case Sunday:
            return "Sunday";
            
        case Monday:
            return "Monday";
            
        case Tuesday:
            return "Tuesday";
            
        case Wednesday:
            return "Wednesday";
            
        case Thursday:
            return "Thursday";
            
        case friday:
            return "Friday";

        case Saturday:
            return "Saturday";

        default:
            return "< Invalid choice >"; 
    }
        
}

void getWeekDayName() {

    ShowWeekDayMenue();
    string day = setWeekDayName(ReadWeekDay());
    cout << "Today is " << day << endl; 
}

int main() {

    getWeekDayName();
}