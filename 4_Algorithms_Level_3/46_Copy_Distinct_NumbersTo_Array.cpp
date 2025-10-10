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

void fillArrayWithElements(int arr[100] , int& arrLength) {

    arrLength = ReadPositiveNumber("Enter number of elements");

    for (int c = 0 ; c < arrLength ; c++){

        cout << "Array [" << c + 1 << "]: ";
        cin >> arr[c];
    }

}

short FindNumberPositionInArray(int number , int arrDestination[100] , int arrDestinationLength){

    for (int c = 0 ; c < arrDestinationLength ; c++) {
        
        if ( number == arrDestination[c])

                return c;
    }

    return -1;
}

bool IsNumberInArray(int number , int arrDestination[100], int arrDestinationLength){

        return FindNumberPositionInArray(number , arrDestination , arrDestinationLength) != -1;
}

void addArrayElements(int number , int arr[100] , int& arrLength){

    arrLength++;

    arr[arrLength - 1] = number;
}

void copy_Distinct_numbers (int arrSource[100] , int arrDestination[100] , int arrSourceLength , int& arrDestinationLength) {

    for (int c = 0 ; c < arrSourceLength; c++) {

       if(!IsNumberInArray(arrSource[c], arrDestination , arrDestinationLength))
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
    
    fillArrayWithElements(arr , arrLength);

    int arr2[100];
    int arr2Length = 0;

    copy_Distinct_numbers(arr , arr2 , arrLength , arr2Length);

    cout << "Array 1 elements:\n";
    printArrayElements(arr , arrLength);

    cout << "\nArray 2 Prime Numbers:\n";
    printArrayElements(arr2 , arr2Length);
}
