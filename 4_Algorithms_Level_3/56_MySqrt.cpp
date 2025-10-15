#include <iostream>
#include <cmath>
using namespace std;


float MySqrt(float number){

    return pow(number , 0.5);

}

float ReadNumber(){

    float number = 0;
    cout << "Enter your number: ";
    cin >> number;

    return number;
}

int main () {

    float number = ReadNumber();
    cout << "MySqrt result: " << MySqrt(number) << endl;
    cout << "C++ Sqrt result: " << sqrt(number) << endl;
}
