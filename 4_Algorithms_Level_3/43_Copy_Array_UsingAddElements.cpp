#include <iostream>
using namespace std;

int ReadPositiveNumber (string message) {
    int number ;
    do {
        cout << message << ": ";
        cin >> number;
    }while ( number <= 0);

    return number;

}

int RandomNumber (int From , int To) {

    int random_number = rand() %  (To - From + 1) - From ;

    return random_number;
}

void fillArrayWithRandomNumber(int arr[100] , int arrLength){

    for (int c = 0 ; c < arrLength ; c++) {

            arr[c] = RandomNumber(0 , 100);
    }

    cout << endl;
}

void addArrayElements(int number , int arr[100] , int& arrLength){

    arrLength++;

    arr[arrLength - 1] = number;
}

void CopyArrayUsingAddArrayElemments (int arrDestination[100] , int arrSource[100] , int arrLength , int& arr2Length) {

    for (int c = 0 ; c < arrLength ; c++) {

        addArrayElements(arrSource[c] , arrDestination , arr2Length);
    }
}


void printArrayElements(int arr[100] , int arrlength){

    for (int c = 0 ; c < arrlength ; c++){

        cout << arr[c] << " ";
    }

    cout << endl;
}

int main () {

    srand ((unsigned) time(NULL));

    int arrLength = ReadPositiveNumber("Enter number of elements");
    int arr[100];

    fillArrayWithRandomNumber(arr , arrLength);

    int arr2[100];
    int arr2Length = 0;

    CopyArrayUsingAddArrayElemments (arr2 , arr , arrLength , arr2Length);

    cout << "Array 1 Elements:\n";
    printArrayElements(arr , arrLength);

    cout << "\nArray 2 Elements after copy:\n";
    printArrayElements(arr2 , arr2Length);

    

}