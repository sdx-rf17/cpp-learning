#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {
    int number ;

    do {
        cout << message << "\n: ";
        cin >> number;
    }while(number <=0);

    return number;
}

void PrintReverseNumber(int number) {
    int Remainder = 0,reversed = 0;

    while(number > 0) {

        Remainder = number % 10;
        number /= 10;
	reversed = reversed * 10 + Remainder;
    }
    
    cout << "\nReversed number: " << reversed << endl;
}

int main() {

    PrintReverseNumber(ReadPositiveNumber("Please enter a positive number"));
}
