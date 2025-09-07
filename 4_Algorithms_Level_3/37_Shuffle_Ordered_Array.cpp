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

void set_ArrayElements(int* array, int length){

    for(int c = 0 ; c < length ; c++){

        array[c] = c + 1 ; 
    }

}


void shuffleOrderedArray(int* array, int length, int* ShOrArray){

    int randomIndex = 0;
    for (int c = 0 ; c <= length ; c++){

        randomIndex = rand() % length;
        ShOrArray[c] = array[randomIndex];
    }
}


void get_ArrayElements(int* array, int length){

    for (int i = 0 ; i < length ; i++) {

        cout << array[i] << " ";
    }

    cout  << endl;
}

int main(){

    srand((unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter how many element");

    int array[length],
        ShOrdArray[length];

    set_ArrayElements(array , length);
    shuffleOrderedArray(array , length , ShOrdArray);

    cout << "\nArray elements before shuffle :: ";
    get_ArrayElements(array , length);

    cout << "\nArray elements before shuffle :: ";
    get_ArrayElements(ShOrdArray , length);

}