#include <iostream>
using namespace std;

int readIntNumberInRange (int From , int To );

int main () {
	
	int From , To ;
	cout << "Enter From\n:";
	cin >> From;
	cout << "Enter To\n:";
	cin >> To ;
	
	readIntNumberInRange(From, To);
}


int readIntNumberInRange (int From , int To ) {

	int number;

	do  {
		
        cout << "Enter the number\n:";
	    cin >> number;

        if (number < From || number > To) 
		cout << "wrong number,Please enter a number between " << From << " and " << To << " .\n:";

	} while ( number < From || number > To );

	cout << "Valid number" << endl;
	
	return number;
}
