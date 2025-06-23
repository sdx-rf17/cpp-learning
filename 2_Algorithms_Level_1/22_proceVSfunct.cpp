#include <iostream>
using namespace std;

void mySumFunction() {
    int num1 , num2 ;
    cout << "\n\t********Procedure********\n";
    cout << "Enter the numbe: ";
    cin >> num1 ;
    cout << "Enter the number: ";
    cin >> num2 ;

    cout << "the sum of " << num1 << " + " << num2 << " = " << num1 + num2 << endl ;

}

int mySumFunction(int num1 , int num2) {
    return num1 + num2 ;
}


int main () {
    //Procedue 
    mySumFunction();


    //function
    cout << "\n\t********Function********\n";
    int num1 , num2 ;
    cout << "Enter the number: ";
    cin >>num1;
    cout << "Enter the number: ";
    cin >>num2;

    cout << "The result of the sum " << mySumFunction(num1 , num2) << endl;
}