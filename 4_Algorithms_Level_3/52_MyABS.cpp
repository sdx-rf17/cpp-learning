#include <iostream>
using namespace std;

float MyABS(float number){

    return ( number > 0 ? number : ( number * -1 ) );
}

float ReadNumber(){

    float number = 0;
    cout << "Enter your number: ";
    cin >> number;

    return number;
}

int main () {

    float number = ReadNumber();
    cout << "Myabs result: " << MyABS(number) << endl;
    cout << "C++ abs result: " << abs(number) << endl;
}