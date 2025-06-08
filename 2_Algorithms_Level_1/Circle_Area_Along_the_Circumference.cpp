#include <iostream>
using namespace std;

int main() {

            cout << "**** Circle Area Along the Circumference ****\n\n";

            const float Pi = 3.14;
            float Area ;
            int L ;

            cout << "Enter L = ";
            cin >> L ;

            Area = (L * L) / (Pi * 4) ;

            cout << "\n_________________________\n";
            cout << "Area = "  << Area << endl;

}