#include <iostream>
using namespace std;

bool checkPIN (string pin){

	return (pin == "1234");
}

string setATM_PIN () {

	string pin;
	cout << "\n\t**** ATM PIN ****\n";
	cout << "Please enter your PIN (1234) \n:: ";
	cin >> pin;

	return pin;
}


void getUSER_DATA(string pin) {

	if (checkPIN(pin)) {

		cout << "\n\t**** USER DATA ****\n";
		cout << "BALANCE \" 7589$ \"" << endl;
	} else {
		
		cout << "Wrong PIN" << endl;
	}
}


int main () {

	getUSER_DATA(setATM_PIN());
}