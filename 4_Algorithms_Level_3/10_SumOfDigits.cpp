#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {
    int number ;

    do{
        cout << message << "\n: ";
        cin >> number;
    }while(number <=0);

    return number;
}

void PrintTheSumOfDigits(int number) {
    int Remainder = 0,
	theSum = 0,
	digits = number;

    while(number > 0) {

        Remainder = number % 10;
        number /= 10;
        theSum += Remainder;
    }
    
    cout << "the sum of the digits < " << digits << " > : " << theSum <<  endl;
}

int main() {

    PrintTheSumOfDigits(ReadPositiveNumber("Please enter a positive number"));
}
