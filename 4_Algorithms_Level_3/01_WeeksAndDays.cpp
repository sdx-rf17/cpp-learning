#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string message) {
	float number;
	
	do {
		cout << message << "\n:";
		cin >> number;
	} while(number <= 0);

	return number;
}

float HoursToDays(float NumberOfHours) {
	
	return (float) NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours) {

	return (float) NumberOfHours / (24 * 7) ;
}

float DaysToWeeks(float NumberOfDays) {

    return (float) NumberOfDays / 7;
}

int main () {

    float NumberOfHours = ReadPositiveNumber("Please enter a positive number ");

    float NumberOfDays = HoursToDays(NumberOfHours);

    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;


}