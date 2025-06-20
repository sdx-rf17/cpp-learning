#include <iostream>
using namespace std;

void powerOfNum () {
    int number;
    cout << "Enter your numer: ";
    cin >> number;

    cout << "\n" << number << " power of 2,3,4 " << endl;
    cout << number << "^2 = " << number * number << "\n" ;
    cout << number << "^3 = " << number * number * number << "\n" ;
    cout << number << "^4 = " << number * number * number * number << "\n" ;
}

int main () {

    powerOfNum();
}