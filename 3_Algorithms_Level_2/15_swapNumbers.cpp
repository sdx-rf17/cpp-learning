#include <iostream>
using namespace std;

void swapNumByVal (int NumOne , int NumTwo) {

    int Temp = NumOne ;
    NumOne = NumTwo;
    NumTwo = Temp;
}

void swapNumByRef (int &NumOne , int &NumTwo) {

    int Temp = NumOne ;
    NumOne = NumTwo;
    NumTwo = Temp;
}
	

int main() {

        int NumOne , NumTwo;

        cout << "\n**** Program swap between two numbers ****\n\n" ;

        cout << "Enter the numbers ***************\n\n" ;
        cout << "Number one = ";
        cin >> NumOne ;
        cout << "Number two = ";
        cin >> NumTwo ;


        cout << "\n *** Before swap *** \n";
        cout << " *** MAIN FUNCTION ***\n";
        cout << "number one = " << NumOne << "\t number two = " << NumTwo << endl;
        
        
        cout << " \n*** After swap *** \n";

        swapNumByVal(NumOne , NumTwo);
        cout << " *** MAIN FUNCTION ***\n";
        cout << " \n*** SWAP FUNCTION (SWAP BY VALUE)  ***\n";
        cout << "number one = " << NumOne << "\t number two = " << NumTwo << endl;
        
        swapNumByRef(NumOne , NumTwo);
        cout << " *** MAIN FUNCTION ***\n";
        cout << " \n*** SWAP FUNCTION (SWAP BY REFERENCE)  ***\n";
        cout << "number one = " << NumOne << "\t number two = " << NumTwo << endl;

}
