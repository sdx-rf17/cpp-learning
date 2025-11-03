#include <iostream>
using namespace std;

int mySumFunction(int a , int b){

    return (a + b);
}

double mySumFunction(double a , double b){

    return (a + b);
}

int mySumFunction(int a , int b , int c){

    return (a + b + c );
}

int mySumFunction(int a , int b , int c , int d){

    return ( a + b + c + d);
}

int main() {

    cout << mySumFunction(10 , 20) << endl;
    cout << mySumFunction(70.3 , 50.4) << endl;
    cout << mySumFunction(10 , 20 , 30) << endl;
    cout << mySumFunction(10 , 20 , 30 , 40) << endl;
}