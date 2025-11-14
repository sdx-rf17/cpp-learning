#include <iostream>
using namespace std;

int main() {

    void* ptr;

    float num_One= 9.17 ;
    int num_Two = 45; 

    ptr = &num_One;

    cout << "Address: " <<  ptr << endl;
    cout << "Value: " << *(static_cast<float*>(ptr)) << endl;


    ptr = &num_Two;

    cout << "\nAddress: " << ptr << endl;
    cout << "Value: " << *(static_cast<int*>(ptr)) << endl;

}