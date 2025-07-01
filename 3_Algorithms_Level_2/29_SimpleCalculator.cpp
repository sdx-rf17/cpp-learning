#include <iostream>
using namespace std;


char setOperationType ();
void calcTwoNumber (float Num1 , float Num2 , char operationType);

int main() {

    float Num1;
    float Num2;
    cout << "Enter number one\n: ";
    cin >> Num1;
    cout << "Enter number two\n: ";
    cin >> Num2;

    calcTwoNumber(Num1 , Num2 , setOperationType());
    

}


char setOperationType () {

    char operationType;
    cout << "Enter the operation type: ";
    cin >> operationType;

    return operationType;

}

void calcTwoNumber (float Num1 , float Num2 , char operationType) {

    if (operationType == '+') {

        cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;

    } else if ( operationType == '-' ) {

        cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;

    } else if ( operationType == '*') {

        cout << Num1 << " * " << Num2 << " = " << Num1 - Num2 << endl;
    } else if (operationType == '/') { 

        cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
    } else {

        cout << "Invalid operation type";
    }
}


