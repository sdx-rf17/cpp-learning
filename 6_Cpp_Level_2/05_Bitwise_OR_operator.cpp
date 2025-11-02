#include <iostream>
using namespace std;

int main(){

   /*
        23 = 1 0111 
                     +
        10 = 0 1010
        _____________
         2 = 1 1111

         result = 2 ;
    */ 

    cout << "Result: " << (23  |  10) ;
    cout << endl;
}