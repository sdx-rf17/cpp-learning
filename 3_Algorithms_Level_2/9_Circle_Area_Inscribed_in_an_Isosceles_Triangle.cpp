#include <iostream>
using namespace std;

const float Pi = 3.14 ;

float Circle_Area_Inscribed_in_an_Isosceles_Triangle ( float a , float  b) {

    return ((Pi * b * b) / 4) * ((2 * a - b) / (2 * a + b));
}

int main () {
        
        cout << "**** Circle Area Inscribed in an Isosceles Triangle ****\n\n";

        float a , b ;
        cout << "Enter a = ";
        cin >> a ;
        cout << "Enter b = " ;
        cin >> b ;

        cout << "\n************************\n";

        cout << "Area = " << Circle_Area_Inscribed_in_an_Isosceles_Triangle( a , b) << endl; 
}