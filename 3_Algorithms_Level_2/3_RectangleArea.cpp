#include <iostream>
using namespace std;

float  RectangleArea (float A , float B) {

    return A * B ;
}

void printRectangleArea (float Area) {

    cout << "\nRectangle Area = " << Area << endl;
}

int main () {

    float A , B;
    cout << "Enter A: ";
    cin >> A ;
    cout << "Enter B: ";
    cin >> B ;

    printRectangleArea(RectangleArea(A , B));

}