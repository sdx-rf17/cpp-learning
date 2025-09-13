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

void SearchForElement(int* array , int length , int number){

    for(int i = 0 ; i < length ; i++){

        if ( number == array[i]) {

            cout << "\nThe number found at position: " << i << "\n";
            cout << "The number found its order: " << i + 1 << endl;
            break;
        }

        if (i + 1 > length - 1 ) {

            cout << "\nThe number is not found :-(" << endl;
        }
            
    }

        
}

void getArrayElements(int* array, int length){

    for(int c = 0 ; c < length ; c++){

        cout << array[c] << " ";
    }

    cout << endl;
}


int main() {
    srand((unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter number of elements");

    int array[length];

    FillArrayWithRandomNumber(array , length);

    getArrayElements(array , length);

    int number = ReadPositiveNumber("Enter a number to search  for");

    cout << "\nNumber you are looking for is: " << number  << endl;

    SearchForElement(array , length , number);


}
