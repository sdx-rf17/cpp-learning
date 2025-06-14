#include <iostream>
#include <cmath>
using namespace std;

float myFun (int a , int d ) {

    return a * sqrt( (d * d) - (a * a) );
}


int main () {

    float a , d ;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter D: ";
    cin >> d;

    cout << "Rectangle area Through Diagonal and Side Area = " << myFun( a , d ) << endl;
} 