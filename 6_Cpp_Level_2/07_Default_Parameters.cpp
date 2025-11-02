#include <iostream> 
using namespace std;

// int mySumFunction(int a , int b , int c , int d);
int mySumFunction(int a , int b , int c = 0 , int d = 0) {

    return ( a + b + c + d);
}

int main() {
    
    cout << mySumFunction(10 , 20)  << endl ;
    cout << mySumFunction(10 , 20 , 30) << endl ;
    cout << mySumFunction(10 , 20 , 30 , 40) << endl ;

}

