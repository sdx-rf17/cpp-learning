#include <iostream>
using namespace std;

const float Pi = 3.14; 


float CircleAreaThroughDiameter (float D ){

    return (Pi * (D * D )) / 4 ;
}
        
int main () {

            cout << "\n____  Circle Area Through Diameter ____ \n\n";
            
            int D ;
            cout << "Enter D = " ;
            cin >> D ;
        
            cout << "\n_______________________\n";
            cout << "\n" << "Area = " << CircleAreaThroughDiameter(D) << endl;
}