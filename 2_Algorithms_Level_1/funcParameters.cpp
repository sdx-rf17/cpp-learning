#include <iostream>
using namespace std;

int mySumFunction(int num1 , int num2) {
    return num1 + num2;
}

int main () {

    int num1 , num2;
    cout << "Enter the number: ";
    cin >> num1 ;
    cout << "Enter the number: ";
    cin >> num2 ;
   cout << "the result " <<  mySumFunction( num1 , num2) << endl;
}