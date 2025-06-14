#include <iostream>
using namespace std;

const float Pi = 3.14;

float Circle_Area_Along_the_Circumference(float L ) {

    return (L * L) / (Pi * 4) ;
}

int main() {

            cout << "**** Circle Area Along the Circumference ****\n\n";
            
            float L ;
            cout << "Enter L = ";
            cin >> L ;

            cout << "\n_________________________\n";
            cout << "Area = "  << Circle_Area_Along_the_Circumference(L) << endl;

}