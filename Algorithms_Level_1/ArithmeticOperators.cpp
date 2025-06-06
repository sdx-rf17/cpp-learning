#include <iostream>
using namespace std;

int main() {
        int numOne , numTwo;
        cout << "Enter the first number :: " ;
        cin >> numOne;
        cout << "Enter the second number :: ";
        cin >> numTwo;

        cout << "\n********************\n";
        cout << "_ " << numOne << " + " << numTwo << " = " << numOne + numTwo << endl;
        cout << "_ " << numOne << " - " << numTwo << " = " << numOne - numTwo ;
        cout << "\n_ " << numOne << " * " << numTwo << " = " << numOne * numTwo ;
        cout << "\n_ " << numOne << " / " << numTwo << " = " << numOne / numTwo ;
        cout << "\n_ " << numOne << " % " << numTwo << " = " << numOne % numTwo << endl;
        cout << "\n********************\n";
    }