#include <iostream>
#include <string>
using namespace std;

int main() {

    string fullName , strOne , strTwo;

    cout << "Enter your full name :: ";
    getline(cin , fullName);

    cout << "Enter first number :: ";
    cin >> strOne;

    cout<< "Enter second number :: ";
    cin >> strTwo;

    system("cls");

    cout << "The length of full name \' " << fullName << " \' is :: " << fullName.length() << "\n";
    cout << "Characters at 0,2,4,7 are " << fullName[0] << " " <<  fullName[2] << " " << fullName[4] << " " << fullName[7] << " " << "\n" ;

    cout << "Concatenating strOne and strTwo = " << strOne + strTwo << "\n"; 
    cout << strOne << " * " << strTwo << " = " <<  stoi(strOne) * stoi(strTwo) << endl;



}