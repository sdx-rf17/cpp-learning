#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message){
    
    int number = 0;
    do{
        cout << message << ": ";
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

    cout << endl;
}

bool CheckNumberInArray(int * array , int length , int number){

    for(int c = 0 ; c < length ; c++) {

        if (number == array[c]){

            return true ;
            break;
        }
    }

    return false ;
}

void getArrayElements(int* array, int length){

    for(int c = 0 ; c < length ; c++){

        cout << array[c] << " ";
    }

    cout << endl;
}

void CheckNumberINarray();

int main() {
    srand((unsigned) time(NULL));

    // int length = ReadPositiveNumber("Enter number of elements");

    // int array[length];

    // FillArrayWithRandomNumber(array , length);

    // getArrayElements(array , length);

    // int number = ReadPositiveNumber("Enter a number to search  for");

    // cout << "\nNumber you are looking for is: " << number  << endl;

    // if (CheckNumberInArray(array , length , number)) {

    //     cout << "Yes, the number if found" << endl;
    // } else {

    //     cout << "No, the number is not found " << endl;
    // }

     CheckNumberINarray();


}

void CheckNumberINarray() {

    int length = ReadPositiveNumber("Enter number of elements");

    int array[length];

    FillArrayWithRandomNumber(array , length);

    getArrayElements(array , length);

    int number = ReadPositiveNumber("Enter a number to search  for");

    cout << "\nNumber you are looking for is: " << number  << endl;

    if (CheckNumberInArray(array , length , number)) {

        cout << "Yes, the number if found" << endl;
    } else {

        cout << "No, the number is not found " << endl;
    }
}