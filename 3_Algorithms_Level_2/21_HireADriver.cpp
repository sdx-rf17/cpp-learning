#include <iostream>
using namespace std;

bool HireADriver( int age , char DriverLicense) {

    return age >= 19 && (DriverLicense == 'y' || DriverLicense == 'Y') ;
}

int main () {

    int age;
    char DriverLicense;
    
    cout << "Enter your age\n: ";
    cin >> age;
    cout << "Do you have a driver license\n[y/n]: ";
    cin >> DriverLicense;

    if ( HireADriver(age , DriverLicense) ) {

        cout << "Hired\n";
    } else {
        cout << "Rejected\n";
    }
}