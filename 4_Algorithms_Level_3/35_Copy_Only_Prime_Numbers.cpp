#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enPrimeNotPrime { Prime = 1 , NotPrime = 2};

enPrimeNotPrime CheckPrime(int Number){

    int M = round(Number / 2);

    for (int Counter = 2 ; Counter <= M ; Counter++){

        if (Number % Counter == 0) {

            return enPrimeNotPrime::NotPrime;
        }

    }

    return enPrimeNotPrime::Prime;
}

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

// print all array elements
void get_ArrayElements(int* array, int length){

    cout <<"Original Array: ";

    for(int c = 0 ; c < length ; c++){

        cout  << array[c] << " ";
    }
}


void CopyOnlyPrimeNumber(int* array, int length){

    int copyArray[length] , PrimeCount = 0;

    for(int c = 0 ; c < length ; c++){

        if (CheckPrime(array[c]) == enPrimeNotPrime::Prime) {

            copyArray[PrimeCount ] = array[c];
            PrimeCount++;
        }
    }

    // get array elements

    cout << "\n" <<"Second Array (Prime Number): ";

    for(int c = 0 ; c < PrimeCount ; c++){

        cout  << copyArray[c] << " ";
    }

    cout << endl ;
    
}

int main() {

    srand( (unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter number of elements");
    int array[length];

    FillArrayWithRandomNumber(array , length);
    get_ArrayElements(array , length);
    CopyOnlyPrimeNumber(array , length);
}
