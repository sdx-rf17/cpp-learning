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

bool isPrime(int num) {
    
    if (num <= 1) return false; 
    if (num == 2) return true; 
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void PrintPrimeNumber(int number){
    
    cout << "\n";
    cout << "Prime numbers from 1 to " << number << " are:\n";

            for (int c = 1 ; c <= number ; c++ ) {

            if (isPrime(c)) {
                
                cout << c << endl;
            }
    }

}

int main() {

        PrintPrimeNumber(ReadPositiveNumber("Please enter a positive number"));
}
