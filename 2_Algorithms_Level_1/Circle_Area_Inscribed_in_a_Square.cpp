#include <iostream>
using namespace std;

int main() {

        cout << "**** Circle Area Inscribed in a Square ****\n\n";

        const float Pi = 3.14 ;
        float Area ;
        int A ;

        cout << "Enter A = ";
        cin >> A ;

        Area = (Pi * (A * A)) / 4 ;

        cout << "\n**************************\n";
        cout << "Area = " << Area << endl;
}