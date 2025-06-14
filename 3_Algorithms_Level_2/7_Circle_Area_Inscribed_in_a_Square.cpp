#include <iostream>
using namespace std;

const float Pi = 3.14 ;

float Circle_Area_Inscribed_in_a_Square (float A ) {

    return (Pi * (A * A)) / 4 ;
}

int main() {

        cout << "**** Circle Area Inscribed in a Square ****\n\n";

        float A ;
        cout << "Enter A = ";
        cin >> A ;

        cout << "\n**************************\n";
        cout << "\nArea = " << Circle_Area_Inscribed_in_a_Square(A) << endl;
}