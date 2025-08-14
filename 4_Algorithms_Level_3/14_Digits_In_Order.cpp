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

int ReverseNumber(int number) {
    int Remainder = 0,reversed = 0;

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
