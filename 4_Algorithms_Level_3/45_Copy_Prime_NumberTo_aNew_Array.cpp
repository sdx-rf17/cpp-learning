#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 2};

enPrimeNotPrime CheckPrimeNumber(int num){

    if (num <= 1) return enPrimeNotPrime::NotPrime; 
    if (num == 2) return enPrimeNotPrime::Prime; 
    if (num % 2 == 0) return enPrimeNotPrime::NotPrime;

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
    
}

int ReadPositiveNumber(string message){
    int number;
    do {
        cout << message << ": ";
        cin >> number;
    }while( number <= 0);

    return number;
}

int RandomNumber (int From , int To){

    int random_number = rand() % (To - From + 1) - From ;

    return random_number;
}

void fillArrayWithRandomNumbers(int arr[100] , int& arrLength) {

    arrLength = ReadPositiveNumber("Enter number of Elements");

    for (int c = 0 ; c < arrLength ; c++) {

        arr[c] = RandomNumber(0,100);
    }
}


void addArrayElements(int number , int arr[100] , int& arrLength){

    arrLength++;

    arr[arrLength - 1] = number;
}


void copy_Prime_numbers (int arrSource[100] , int arrDestination[100] , int arrLength , int& arrDestinationLength) {

    for (int c = 0 ; c < arrLength ; c++) {

       if(CheckPrimeNumber(arrSource[c]) == enPrimeNotPrime::Prime)
             addArrayElements(arrSource[c] , arrDestination , arrDestinationLength);
    }
}

void printArrayElements(int arr[100] , int arrlength){

    for (int c = 0 ; c < arrlength ; c++){

        cout << arr[c] << " ";
    }

    cout << endl;
}


int main() {
    
    srand((unsigned) time (NULL));

    int arr[100];
    int arrLength = 0;
    
    fillArrayWithRandomNumbers(arr , arrLength);

    int arr2[100];
    int arr2Length = 0;

    copy_Prime_numbers(arr , arr2 , arrLength , arr2Length);

    cout << "Array 1 elements:\n";
    printArrayElements(arr , arrLength);

    cout << "\nArray 2 Prime Numbers:\n";
    printArrayElements(arr2 , arr2Length);
}
