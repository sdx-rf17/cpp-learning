#include <iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << ": ";
        cin >> number;
    }while(number <= 0);

    return number;
}

int randomNumber(int From , int To) {

    int rand_number = rand() % (To - From + 1) + From ;
    return rand_number;
}

void fillArrayWithRandomNumbers(int arr[100] , int arrLength) {

    for (int c = 0 ; c < arrLength ; c++){

        arr[c] = randomNumber(-100 , 100);
    }
}

int PositiveNumbersCount(int arr[100] , int arrLength){

    int counter = 0;
    for (int i = 0 ; i < arrLength ; i++) {

        if (arr[i] >= 0) counter++;
    }

    return counter;
}

void printArrayElements(int arr[100] , int arrLength) {

    for (int c = 0 ; c < arrLength ; c++) {

        cout << arr[c] << " ";
    }

    cout << "\n";
}

int main() {
    srand((unsigned) time (NULL));

    int arr[100],
        arrLength = ReadPositiveNumber("Enter number of elements");

    fillArrayWithRandomNumbers( arr , arrLength);

    cout << "\nArray Elements: ";
    printArrayElements( arr , arrLength);

    cout << "\nPositve Numbers count is: ";
    cout << PositiveNumbersCount( arr, arrLength) << endl;


}
