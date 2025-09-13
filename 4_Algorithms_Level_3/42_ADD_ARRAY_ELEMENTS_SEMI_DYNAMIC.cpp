#include <iostream>
using namespace std;

int ReadNumber() {

    int number;
    cout << "Please enter a number?: ";
    cin >> number;

    return number;
}

void AddArrayElement(int number , int arr[100] , int& arrLength) {

    arrLength++;

    arr[arrLength - 1] = number;
}

void InputUserNumbersInArray(int arr[100] , int& arrLength) {

    bool AddMore = true ;

    do{

        AddArrayElement(ReadNumber() , arr , arrLength);

        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;


    }while (AddMore);

}

void PrintArray(int arr[100] , int arrLength) {

    for(int i = 0 ; i < arrLength ; i++) {

        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int arr[100] , arrLength = 0 ;

    InputUserNumbersInArray(arr , arrLength);

    cout << "\nArray length: " << arrLength << endl;
    cout << "Array elements: ";

    PrintArray(arr , arrLength);
}