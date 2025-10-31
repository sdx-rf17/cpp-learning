#include <iostream>
using namespace std;

int read_num(string message){
    int number;
    cout << message << "\n: ";
    cin >> number;

    return number;
}

int main() {

    // Program to check if the number positive or negative.

    int Number = read_num("Enter your number");

    (Number > 0) ? cout << "Positive" : cout << "Negative" ;

    cout << "\n";

    // Program to check if the number Zero positive or negative .

    Number = read_num("Enter your number");

    (Number > 0) ? cout << "Positive" :( (Number > 0) ? cout << "Positive" : cout << "Negative" ) ;
}