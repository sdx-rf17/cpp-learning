#include <iostream>
#include <cmath>
using namespace std;


float MyFloor(float number){

    return (number > 0 ? int (number) : int (number) - 1 );

}

float ReadNumber(){

    float number = 0;
    cout << "Enter your number: ";
    cin >> number;

    return number;
}

int main () {

    float number = ReadNumber();
    cout << "MyFloor result: " << MyFloor(number) << endl;
    cout << "C++ Floor result: " << floor(number) << endl;
}
