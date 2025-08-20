#include <iostream>
using namespace std;

int ReadPositiveNumber(string message);
void setArrayElements(int* array, int length);
void printReversedElem(int* array, int length);
int main() {
    
    int length = ReadPositiveNumber("Enter a positive number");
    int array[length];
    setArrayElements(array , length);
    printReversedElem(array , length);

}

int ReadPositiveNumber(string message) {
    int number;
    do {
        cout << message << "\n: ";
        cin >> number;
    }while(number <= 0);

    return number;
}

void setArrayElements(int* array, int length) {


    for (int c = 0 ; c <= length ; c++){

        cout << "Element [" << c << "]: ";
        cin >> array[c];
    }

    
}

void printReversedElem(int* array, int length) {

    cout << "Array Element [";
    for(int c = 0 ; c <= length ; c++){

        cout << array[c];
        if (c < length) cout << ", ";
    }
    cout << "]" << endl;

   cout << "Reversed Element [";
    for(int c = length ; c >= 0 ; c--){

        cout << array[c];
        if (c > 0) cout << ", ";
    }
    cout << "]" << endl; 
    
}
