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
// print all array elements
void get_ArrayElements(int* array, int length){

    cout <<"Original Array: ";

    for(int c = 0 ; c < length ; c++){

        cout  << array[c] << " ";
    }
}

void CopyArray(int* array, int length){

    int copyArray[length];

    for(int c = 0 ; c < length ; c++){

        copyArray[c] = array[c];
    }

    // get array elements

    cout << "\n" <<"Second Array: ";

    for(int c = 0 ; c < length ; c++){

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
    CopyArray(array , length);
}
