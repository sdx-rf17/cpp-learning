#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float number){
    return number - int(number);
}

float MyCeil(float number){

    if(abs(GetFractionPart(number)) > 0) {

        // if number postive or negative 
        
        return (number > 0 ? int(number) + 1 : int(number) );
    }
    else {
        return number;
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
    cout << "MyCeil result: " << MyCeil(number) << endl;
    cout << "C++ Ceil result: " << ceil(number) << endl;
}
