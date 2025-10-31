#include <iostream>
using namespace std;

int main(){

    /*
        23 = 10 0011
                     +
        10 = 00 1010
        _____________
         2 = 00 0010

         result = 2 ;
    */

    cout << "Result: " << (23 & 10) ;
    cout << endl;
}