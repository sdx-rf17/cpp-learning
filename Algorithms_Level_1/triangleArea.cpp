#include <iostream>
using namespace std;

int main() {

        cout << "_____ Program print Triangle Area ____\n\n";

        float a , h , area;

        cout << "Enter a = ";
        cin >> a ;
        cout << "Enter h = ";
        cin >> h ;

        area = 0.5 * ( a*h ) ;

        cout << "\n___________________\n";
        cout << "Area of Triangle = " << area << endl;
}