#include <iostream>
using namespace std;

struct stMarks {
	int mark1 , mark2 , mark3;
    float averageMarks;
};

bool averagePassFail(stMarks studentOne) {

	return studentOne.averageMarks >= 50 ;
}

stMarks setStudentsMarks (stMarks studentOne) {

    cout << "Enter your marks\n";
	cout << "Mark one: ";
	cin >> studentOne.mark1 ;
	cout << "Mark two: ";
	cin >> studentOne.mark2;
	cout << "Mark three: ";
	cin >> studentOne.mark3;

    studentOne.averageMarks = (studentOne.mark1 + studentOne.mark2 + studentOne.mark3) / 3.00 ;

    return studentOne;
}

void printAverageOfmarks(stMarks studentOne) {

    if (averagePassFail(studentOne)) {

		cout << "the average marks =  " << studentOne.averageMarks  << " < PASS >" << endl;
	}else {
		cout <<   "the average marks =  " << studentOne.averageMarks  <<  " < FAIL >" << endl;
	}
}

int main (){

	stMarks studentOne ;

	printAverageOfmarks (setStudentsMarks(studentOne) );

}





