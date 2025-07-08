#include <iostream>
using namespace std;


char setOperationType ();
void calcTwoNumber (float Num1 , float Num2);

int main() {

    float Num1;
    float Num2;
    cout << "Enter number one\n: ";
    cin >> Num1;
    cout << "Enter number two\n: ";
    cin >> Num2;

    calcTwoNumber(Num1 , Num2);
    

}


char setOperationType () {

    char operationType;
    cout << "Enter the operation type: ";
    cin >> operationType;

    return operationType;

}

void calcTwoNumber (float Num1 , float Num2) {

    switch (setOperationType()) {

        case '+':
        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
        break;

        case '-':
        cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
        break;

        case '*':
        cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
        break;

        case '/':
        cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
        break;

        default:
        cout << "Invalid operation type";
    }
}
