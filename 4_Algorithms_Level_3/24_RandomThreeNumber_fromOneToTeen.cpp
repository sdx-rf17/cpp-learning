#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To){

    int randNum = rand() % (To - From + 1) + From ;
	return randNum;
}

int main(){
    srand((unsigned) time(NULL));

    cout << RandomNumber(0 , 10) << endl;
    cout << RandomNumber(20 , 30) << endl;
    cout << RandomNumber(30 , 40) << endl;
}
