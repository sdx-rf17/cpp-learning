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

}

void SumOfTwoArrays(int* arrOne, int* arrTwo, int* arrSum, int length){

    for(int c = 0 ; c < length ; c++){

        arrSum[c] = arrOne[c] + arrTwo[c];
    } 
 }
 
// print all array elements
void get_ArrayElements(int* array, int length){

    for(int c = 0 ; c < length ; c++){

        cout  << array[c] << " ";
    }

    cout << "\n" << endl;
}



int main() {

    srand( (unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter number of elements");
    cout << endl;

    int arrOne[length],
        arrTwo[length],
        arrSum[length];

    FillArrayWithRandomNumber(arrOne, length);
    FillArrayWithRandomNumber(arrTwo, length);

    cout << "Array 1 elements :: ";
    get_ArrayElements(arrOne, length);

    cout << "Array 2 elements :: ";
    get_ArrayElements(arrTwo, length);

    
    SumOfTwoArrays(arrOne, arrTwo, arrSum, length);
    cout << "Sum of Two arrays :: ";
    get_ArrayElements(arrSum, length);
}
