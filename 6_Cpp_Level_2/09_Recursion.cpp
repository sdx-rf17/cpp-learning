#include <iostream>
using namespace std;

void printNumberDwon(int n , int m){

     if ( n <= m) {
        
        cout << m << "\n";
        
        printNumberDwon(n , --m);
     }
 
}

int PowerOfNumber(int base , int power)
{
    if(power == 0)
        return 1;
    else{
        return (base * (PowerOfNumber(base , power - 1)) );
    }

}

int main() {

    cout << "Print Numbers from N to M down\n";
    printNumberDwon(1 , 100);

    cout << "\nPower of number " << endl;
    cout << PowerOfNumber(2 , 3);
}