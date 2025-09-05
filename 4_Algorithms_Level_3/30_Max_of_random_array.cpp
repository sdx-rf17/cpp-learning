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

        array[c] = RandomNumber(0 , 400);
    }

    cout << endl;
}

void getArrayElements(int* array, int length){

    cout <<"Array: ";
    for(int c = 0 ; c < length ; c++){

        cout  << array[c] << " ";
    }
}

void getMaxNumber(int* array, int length){

    int maxNumber = 0;

    for(int c = 0 ; c < length ; c++){

            if (array[c] > maxNumber ) {

                maxNumber = array[c];
            }

        } 
    

    cout << "\nMax number is: " << maxNumber << endl;
}

int main() {
    srand((unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter number of element");
    int array[length];

    FillArrayWithRandomNumber(array , length);
    getArrayElements(array , length);
    getMaxNumber(array , length);



}