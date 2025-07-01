#include <iostream>
using namespace std;

bool isValid (int age) {

	return ( age >= 18 && age <= 45);
}

int setAge () {

	int age;
	cout << "Enter your age\n: ";
	cin >> age;

	return age;
}

void printResult (int age) {

	if ( isValid(age)) {
		
		cout << "Valid Age" << endl;
	}else {
		cout << "Invalid Age" << endl;
	}
}

int main() {

	printResult(setAge());
	
}
