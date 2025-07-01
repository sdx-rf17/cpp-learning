#include <iostream>
using namespace std;

void checkGrade(int Grade){

    if (Grade >= 90 && Grade <= 100) {

		cout << "A (" << Grade << ")" << endl;

	} else if ( Grade >=80 && Grade <= 89 ) {
		
		cout << "B (" << Grade << ")" << endl;
	
 	} else if( Grade >= 70 && Grade <= 79 ) {

		cout << "C (" << Grade << ")" << endl;

     } else if ( Grade >= 60 && Grade <= 69 ) {

		cout << "D (" << Grade << ")" << endl;

    }else if ( Grade >= 50 && Grade <= 59 ) {
		
		cout << "E (" << Grade << ")" << endl;

    } else { 
		cout << "F (" << Grade << ")" << endl; 
	}
}

int setGrade () {

    int Grade;
	cout << "Please enter your grade\n:";
	cin >> Grade;

    return Grade;
}
int main() {

    checkGrade(setGrade());
}













