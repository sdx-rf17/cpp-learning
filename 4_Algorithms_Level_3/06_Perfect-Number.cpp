#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string messages){

    int number = 0;
    do {
        cout << messages << "\n: ";
        cin >> number;
    }while(number<= 0);

    return number;
}

int Power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}


bool isPrime(int num) {
    if (num <= 1) return false; 
    if (num == 2) return true; 
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void PrintPerfectNumber(int PositiveNumber) {
    for (int p = 2; ; ++p) {
        if (isPrime(p)) {
            int mersenne = Power(2, p) - 1;
            if (isPrime(mersenne)) {
                int perfect = Power(2, p - 1) * mersenne;
                if (perfect == PositiveNumber) {
                    cout << PositiveNumber << " is a perfect number." << endl;
                    return;
                } else if (perfect > PositiveNumber) {
                    cout << PositiveNumber << " is not a perfect number." << endl;
                    return;
                }
            }
        }
    }
}

int main() { 

    PrintPerfectNumber(ReadPositiveNumber("Please enter a positive number"));
}
