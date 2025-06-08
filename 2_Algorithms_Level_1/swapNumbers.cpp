#include <iostream>
using namespace std;

int main() {
    
        cout << "**** Program swap between two numbers ****\n\n" ;
        
        int numOne ,
            numTwo ,
            temp ;

        cout << "Enter the numbers ***************\n\n" ;
        cout << "Number one = ";
        cin >> numOne ;
        cout << "Number two = ";
        cin >> numTwo ;

        cout << " *** Before swap *** \n";
        cout << "number one = " << numOne << "\t number two = " << numTwo << endl;
        
        
        temp = numOne ;
        numOne = numTwo;
        numTwo = temp;
        
        cout << " *** After swap *** \n";
        cout << "number one = " << numOne << "\t number two = " << numTwo << endl;
}