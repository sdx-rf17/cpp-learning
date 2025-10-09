#include <iostream>
using namespace std;

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

bool IsOdd_number(int number) {

     return (number % 2 != 0);
}

void addArrayElements(int number , int arr[100] , int& arrLength){

    arrLength++;

    arr[arrLength - 1] = number;
}


void copy_Odd_number (int arrSource[100] , int arrDestination[100] , int arrLength , int& arrDestinationLength) {

    for (int c = 0 ; c < arrLength ; c++) {

       if(IsOdd_number(arrSource[c]) )
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

    copy_Odd_number(arr , arr2 , arrLength , arr2Length);

    cout << "Array 1 elements:\n";
    printArrayElements(arr , arrLength);

    cout << "\nArray 2 Odd Numbers:\n";
    printArrayElements(arr2 , arr2Length);
}