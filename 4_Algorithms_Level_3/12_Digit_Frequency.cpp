#include <iostream>
using namespace std;

unsigned long long ReadPositiveNumber(string message) {
    unsigned long long number ;

    do {
        cout << message << "\n: ";
        cin >> number;
    }while(number <=0);

    //cin.ignore();
    return number;
}

void PrintDigitFrequency( unsigned long long number, unsigned long long digit) {
    unsigned long long Remainder = 0,
	frequency = 0;

    while(number > 0) {

        Remainder = number % 10;
        number /= 10;
	
	if(digit == Remainder) frequency++;
    }
    
    cout << "Digit " << digit << " Frequency " << frequency << " times." << endl;
}


int main() {

	unsigned long long number = ReadPositiveNumber("please enter a POSITIVE number");
	//cin.ignore();
	unsigned long long digit = ReadPositiveNumber("Enter a digit that you\'re looking for");
    PrintDigitFrequency(number , digit);
}
