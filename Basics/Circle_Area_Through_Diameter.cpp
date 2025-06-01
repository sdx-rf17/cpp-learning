#include <iostream>
using namespace std;

int main () {

            cout << "____  Circle Area Through Diameter ____ \n\n";

            const float Pi = 3.14; 
            float Area ;
            int D ;

            cout << "Enter D = " ;
            cin >> D ;
            
            Area = (Pi * (D * D )) / 4 ;

            cout << "\n_______________________\n";
            cout << "Area" << Area << endl;
}