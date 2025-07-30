#include <iostream>
using namespace std;

int main () {

    short age;
    cout << "Enter your age\n: ";
    cin >> age;

    if (age >= 19 ) {
        cout << "Old enough to work\n" << endl;
        
    } else {
        cout  << "Not old enough to work\n" << endl;
    }

    return 0 ;
}