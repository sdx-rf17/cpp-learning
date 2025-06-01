#include <iostream>
using namespace std;

int main () {

        cout << "**** Program print the average of there Marks ****\n\n" ;

        int markOne,
            markTwo,
            markThree;

        cout << "Enter the Marks *****\n\n";
        cout << "Mark 1 = ";
        cin >> markOne ;
        cout << "Mark 2 = ";
        cin >> markTwo;
        cout << "Mark 3 = ";
        cin >> markThree;


        cout << "*************************\n\n";
        cout << "The average of entered Marks is < " << (markOne + markTwo + markThree) / 3 << " > ." << endl;
}