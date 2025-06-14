#include <iostream>
using namespace std;

//global variables
int num1 , num2 ;


void setNumbers () {

    // we use :: to access global variables
    
    cout << "Enter number one: ";
    cin >> ::num1;
    cout << "Enter number two: ";
    cin >> ::num2;

    cout << "\nNumber one = " << ::num1 << "\n" ;
    cout << "Number two = " << ::num2 << endl;
}

void swapNumbers(int num1 , int num2) {

    int tmp = num1 ;
    num1 = num2;
    num2 = tmp;

    cout << "\n**** Swap number ****\n" ;
    cout << "NumberOne = " << num1 << "\n";
    cout << "NumberTwo = " << num2 << endl;

}


int main () {
    
    setNumbers();
    swapNumbers(::num1 , ::num2);
}