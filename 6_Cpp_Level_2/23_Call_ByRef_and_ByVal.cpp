#include <iostream>
using namespace std;

void myFunction(int& x){

	x++;

}

int main(){

	int a = 10;

	myFunction(a);

	cout << "The value of a afer calling the function:  " << a << endl;

	return 0;
}
