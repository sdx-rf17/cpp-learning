#include <iostream>
using namespace std;

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << "\n:";
        cin >> number;
    }while( number <= 0);

    return number ;
}

void setArrayElements(int* array, int length){

    cout << "\n*** Enter the elements ***\n\n";

    for(int c = 0; c < length ; c++) {

        cout << "Element [" << c + 1 << "]: ";
        cin >> array[c];  
    }

    cout << endl;
}

void getArrayElements(int* array, int length) {

    cout << "\nOriginal Array: ";
    for(int c = 0; c < length ; c++) {

        cout << array[c]; 
        (c < length - 1 ? cout << ", " : cout << ".");
    }

    cout << endl;
}

int Timesrepeated(int* array, int numberToCheck , int length){

    int count = 0 ;

    for (int c = 0 ; c < length ; c++){

        if (numberToCheck == array[c]) count++ ;
    }

    return count;
}

int main(){

    int NumberToCheck, length;
    cout << "Enter  number of elements\n:";
    cin >> length;

    int array[length];

    setArrayElements(array , length);

    cout << "Enter the number that you want to check\n:";
    cin >> NumberToCheck;

    getArrayElements(array, length);

    cout << NumberToCheck << " is repeated " << Timesrepeated(array , NumberToCheck , length) << " time(s)." << endl; 
    
    


}