#include <iostream>
using namespace std;

int main() {

        cout << "**** Program print the sum of three number ****\n\n" ;

        int numOne ,
            numTwo,
            numThree;

        cout << "Enter the numbers *****\n";
        cout << "First :: " ;
        cin >> numOne;
        cout << "Second :: ";
        cin >> numTwo;
        cout << "Third :: ";
        cin >> numThree;

        cout << "*************************\n\n";
        cout << "The sum of < " << numOne << " > + " << "< " << numTwo << " > + " << "< " << numThree << " > = " <<  numOne + numTwo + numThree << endl;
}