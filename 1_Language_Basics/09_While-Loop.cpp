#include <iostream>
using namespace std;

int readIntNumberInRange (int from , int to ) {
	int number;
	cout << "Enter the number\n:";
	cin >> number;

	while ( number < from || number > to ) {
		
		cout << "wrong number,Please enter a number between " << from << " and " << to << "\n:";
		cin >> number;
	} 

	cout << "Valid number" << endl;
	
	return number;
}

int main () {
	
	int from , to ;
	cout << "Enter from\n:";
	cin >> from;
	cout << "Enter to\n:";
	cin >> to ;
	
	readIntNumberInRange(from, to);
}
