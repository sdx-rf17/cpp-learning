#include <iostream>
using namespace std;

int sum  = 33 ;

void myFunction() {
    
    int sum = 10 ;
    cout << "\n" <<  "the value of sum inside the function is :: " << sum << endl;
}

int main () {

    myFunction();

    int sum = 48;

    cout << "the value of sum inside the Main  is :: " << sum << "\n";

    cout << "the value of the sum :: " << ::sum << "\n";

    ::sum += 66 ; // this is how to access the global variables with :: 

    cout << "the value of the sum now :: " << ::sum << endl;


}