#include <iostream>
using namespace std;

const float Pi = 3.14;

float clucArea(float r) {

    return Pi * (r * r);
}

int main () {

    float r ; 
    cout << "Enter r: ";
    cin >> r;

    cout << "Area = " << clucArea(r) ;
}
