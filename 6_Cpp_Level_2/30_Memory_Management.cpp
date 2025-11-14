#include <iostream>
using namespace std;

int main() {

    //declare an integer pointer
    int* ptr_X;

    //declare a float pointer
    float* ptr_Y;

    ptr_X = new int;
    ptr_Y = new float;

    *ptr_X = 23;
    *ptr_Y = 89.18;

    cout << "ptr_X = " << *ptr_X << endl;
    cout << "ptr_Y = " << *ptr_Y << endl;

    delete ptr_X;
    delete ptr_Y;

}