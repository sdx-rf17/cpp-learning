#include <iostream>
using namespace std;

enum enRole {ADMIN = 0 , USER = 1} ;

int main () {

	cout << "(0) Admin\n";
	cout << "(1) User\n";
	cout << "Enter your choice\n:";

	int choice;
	cin >> choice;

	enRole role;

	role = (enRole) choice;

	if (choice == enRole::ADMIN) {

		cout << "ADMIN" << endl;
	} else {
		cout << "USER" << endl;
	}
}