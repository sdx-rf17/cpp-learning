#include <iostream>
using namespace std;

bool passFail ( int mark) {
    
    return mark >= 50;
}

int main() {

    int mark ;
    cout << "Enter your mark\n: ";
    cin >> mark;

    if (passFail(mark)) {

        cout << "PASS" << endl;
    } else {
        cout << "FAILL" << endl;
    }

    return 0;
}