#include <iostream>
#include <cmath>
using namespace std;

const float Pi = 3.14;

float  Circle_Area_circle_Described_Around_an_Arbitrary_Triangle( float a , float b , float c , float p ) {

      float T = ( ( a * b *c ) / (4 * sqrt ( p * ( p - a ) * ( p - b ) * ( p - c) ) ) ) ; 
      T *= T ;
      
      return Pi * T ;

}


int main () {

    cout << "\n*************  Circle Area circle Described Around an Arbitrary Triangle *************\n";


    float a , b , c , p ;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c ;

    p = (a + b + c) / 2 ;

    cout << "\n______________________________\n";

    cout << "\nArea = " << Circle_Area_circle_Described_Around_an_Arbitrary_Triangle ( a , b , c , p ) << endl;
}