#include <iostream>
using namespace std;

void myfunction(){
	// If the variable is used without static, it will retain the same value.
	static int Number = 1;
	cout << "The value of the number: " << Number << "\n";

	Number++;
}

int main(){

	myfunction();
	myfunction();
	myfunction();
}
