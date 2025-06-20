#include <iostream>
using namespace std;

double powerof_M (int num , int M) {

    double result = 1;

    for (int c = 1 ; c <= M ; c++) {

        result *= num ; 
    }

    return result;
}

void printResult () {
    int number, M ;
    cout << "Enter your number: ";
    cin >> number;
    cout << "Enter your power: ";
    cin >> M;

    cout << "\nNumber = " << number 
    << "\nPower = " << M
    << "\nResult = " <<  powerof_M ( number , M) << endl;

}

int main () {

    printResult();
}