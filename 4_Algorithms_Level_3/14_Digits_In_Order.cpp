#include <iostream>
using namespace std;

unsigned long long ReadPositiveNumber(string message) {
    unsigned long long number ;

    do {
        cout << message << "\n: ";
        cin >> number;
    }while(number <=0);

    return number;
}

unsigned long long ReverseNumber(unsigned long long number) {
    unsigned long long Remainder = 0,reversed = 0;

    while(number > 0) {

        Remainder = number % 10;
        number /= 10;
	reversed = reversed * 10 + Remainder;
    }
    
    return reversed;
}
void PrintDigitsInOrder(int reversed){

    int Remainder = 0 ;

    while (reversed> 0) {
        Remainder = reversed % 10;
        reversed /= 10;

        cout << Remainder << endl;
    }
}
int main() {

    PrintDigitsInOrder(ReverseNumber(ReadPositiveNumber("Please enter a positive number")));
}
