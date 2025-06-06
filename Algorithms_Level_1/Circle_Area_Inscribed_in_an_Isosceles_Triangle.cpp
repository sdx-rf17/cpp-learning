#include <iostream>
using namespace std;

int main () {
        
        cout << "**** Circle Area Inscribed in an Isosceles Triangle ****\n\n";

        const float Pi = 3.14 ;
        float a , b ;
        float Area ;

        cout << "Enter a = ";
        cin >> a ;
        cout << "Enter b = " ;
        cin >> b ;

        // Area = ( (Pi * b * b) / 4 ) * ( (2 * a - b) / (2 * a + b ) );
        Area = ((Pi * b * b) / 4) * ((2 * a - b) / (2 * a + b));
        
        cout << "\n************************\n";

        cout << "Area = " << Area << endl; 
}