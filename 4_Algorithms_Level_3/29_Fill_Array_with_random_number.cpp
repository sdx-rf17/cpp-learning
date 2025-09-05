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

void getArrayElements(int* array, int length){

    cout << "\n*** Array Elements (randomly) *** \n";
    for(int c = 0 ; c < length ; c++){

        cout << "Element [" << c + 1 << "]: ";
        cout << array[c] << "\n";
    }
}


int main() {
    srand((unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter how many random number do you want to set");
    int array[length];

    FillArrayWithRandomNumber(array , length);
    getArrayElements(array , length);



}