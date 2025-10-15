#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float number){
    return number - int(number);
}

float MyRound(float number){

    int intPart = int (number);
    float fractionPart = GetFractionPart(number);

    if (abs(fractionPart) >= .5){
        
        return (number > 0 ? ++intPart : --intPart);
    }
    else {
        return intPart;
    }

}

float ReadNumber(){

    float number = 0;
    cout << "Enter your number: ";
    cin >> number;

    return number;
}

int main () {

    float number = ReadNumber();
    cout << "Myround result: " << MyRound(number) << endl;
    cout << "C++ round result: " << round(number) << endl;
}
