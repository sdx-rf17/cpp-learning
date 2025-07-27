#include <iostream>
using namespace std;

void PrintTableHeader () {

    cout << "\n\n\t\tMultiplication Table From 1 to 10\n\n\n";
    cout << " *\t";

    for (int c = 1 ; c <= 10 ; c++){

        cout << c << "\t" ;
    }

    cout << "\n------------------------------------------------------------------------------------" << endl;

}

string ColumSperator(int i){

    if ( i < 10){

        return "    |";
    } else {

        return "   |";
    }
}

void MultiplicationTable() {

    PrintTableHeader();

    for (int c = 1 ; c <= 10 ; c++){

        cout << " " << c << ColumSperator(c) << "\t" ;

        for (int n = 1 ; n <= 10 ; n++) {

            cout   << n * c << "\t";
        }

        cout << "\n";
    }
}

int main () {

    MultiplicationTable();
}