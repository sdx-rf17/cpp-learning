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

void PrintDigits(int number) {
    int Remainder = 0;

    while(number > 0) {

        Remainder = number % 10;
        number /= 10;

        cout << Remainder << "\n";
    }
    cout << endl;
}

int main() {

    PrintDigits(ReadPositiveNumber("Please enter a positive number"));
}
