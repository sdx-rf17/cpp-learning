#include <iostream>
using namespace std;

void FillArray(int arr[100] , int& arrLength){

    cout << "Enter number of elements: ";
    cin >> arrLength;
    for (int i = 0 ; i < arrLength ; i++){

        cout << "Array [" << i + 1 <<  "]: ";
        cin >> arr[i];
    }
}

void PrintArray(int arr[100] , int arrLength){

    for(int c = 0 ; c < arrLength ; c++){

        cout << arr[c] << " ";
    }

    cout << endl;
}

bool IsPalindromeArray(int arr[100] , int arrLength) {

    for (int c = 0 ; c < arrLength ; c++){

        if (arr[c] != arr[arrLength - c - 1])
            return false;
    }

    return true;
}

int main() {

    int arr[100] , arrLength = 0 ;

    FillArray(arr , arrLength);

    cout << "Array elements:\n";
    PrintArray(arr , arrLength);

    if (IsPalindromeArray(arr , arrLength)){

        cout << "YES, array is Palindrome." << endl;
    } else {
        cout << "NO, array is not Palindrome." << endl;
    }
}