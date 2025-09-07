#include <iostream>
using namespace std;

int ReadPositiveNumber(string message);
void FillArrayWithRandomNumber(int* array, int length);
void CopyArrInReverse(int* arrOne,int length , int* arrTwo ); 
void getArrayElements(int* array , int length);

int main() {

    
    int length = ReadPositiveNumber("Enter number of elements");
    int arrOne[length],
        arrTwo[length];
        
    FillArrayWithRandomNumber(arrOne, length);

    cout << "\nArray 1 elements:\n ";
    getArrayElements(arrOne, length);

    CopyArrInReverse(arrOne, length , arrTwo );

    cout << "\nArray 2 elements after copy:\n ";
    getArrayElements(arrTwo , length);

}

int ReadPositiveNumber(string message) {
    int number;
    do {
        cout << message << "\n: ";
        cin >> number;
    }while(number <= 0);

    return number;
}

int RandomNumber(int From , int To){

    int randomNumber = rand() % (To - From + 1) + From;

    return randomNumber;

}

void FillArrayWithRandomNumber(int* array, int length){

    
    for(int c = 0 ; c < length ; c++){

        array[c] = RandomNumber(0 , 100);
    }

}

void CopyArrInReverse(int* arrOne,int length , int* arrTwo ) {

    // int ReverseCounter = length;

    for(int p = 0 ; p <= length ; p++){

        arrTwo[p] = arrOne[length - 1 - p];
    }
}

void getArrayElements(int* array , int length){

    for (int p = 0 ; p < length ; p++){

        cout << array[p ] << " ";
    }
    
    cout << "\n";
}