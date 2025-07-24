
#include <iostream>
#include <conio.h>
using namespace std;

string readPin() {

    string pin ;
    char ch;

    cout << "Enter your pin\n: ";

    while ((ch = _getch()) != '\r') { // Enter key
        if (ch == '\b') { // Backspace
            if (!pin.empty()) {
                pin.pop_back();
                cout << "\b \b";
            }
        } else {
            pin.push_back(ch);
            cout << '*';
        }
    }

    return pin;
}

bool login() {


    string pinCode;
    string CorrectPin = "12345";
    do {
        pinCode = readPin();

        if (pinCode == CorrectPin) {
            
            return 1;
        } else {

            cout << "\nWRONG PIN\n";
            system(" color 4F");
        }

    } while( pinCode != CorrectPin );

     return 0;
}



int main () {

    if(login()) {

        system(" color 2F");
        cout << "\n Your account balance is 7898 $" << endl;
    }

    return 0;
}
