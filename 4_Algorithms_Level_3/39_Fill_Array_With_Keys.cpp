#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

enum EnCharType{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int ReadPositiveNumber(string message){
    int number;
    do{
        cout << message << "\n: ";
        cin >> number;
    }while(number < 0);


    return number;
}

int RandomNumber(int From , int To) {

    int randomNumber = rand() % (To - From + 1) + From;
    return randomNumber;
}

char GetRandomChar(EnCharType CharType){

    switch(CharType){

        case EnCharType::SmallLetter: {
            return char(RandomNumber(97 , 122 ));
            break;
        }
        case EnCharType::CapitalLetter: {
            return char(RandomNumber(65 , 90));
            break;
        }
        case EnCharType::SpecialCharacter: {
            return char(RandomNumber(33 , 47));
            break;
        }
        case EnCharType::Digit: {
            return char(RandomNumber(48 , 57 ));
            break;
        }
    }

    return '\0';
}

string GenerateWrod(EnCharType CharType , short Length){

    string word;

    for(int c = 0 ; c < Length ; c++){

        word += GetRandomChar(CharType);
    }

    return word;
}

string GenerateKey( int lengthOfword = 4 , int NumOfWord = 4 ){

    string key;
    int dashCount = 0;

    for (int c = 0 ; c < NumOfWord ; c++){
        key += GenerateWrod(EnCharType::CapitalLetter , lengthOfword);
        ++dashCount;

        if(dashCount == 1 && c != NumOfWord - 1) {
            key += '-';
            dashCount = 0;
        }
        
    }

    return key;
}

void set_ArrayOfKeys(string* array , int length){

    for (int c = 0 ; c < length ; c++) {

       array[c] = GenerateKey();
    }
}

void get_ArrayOfKeys(string* array , int length) {

    cout << "Array Elements:\n\n";

    for (int c = 0 ; c < length ; c++){

        cout << "Array[" << c + 1 << "]: " <<  array[c] << "\n";
    }
    cout << endl;
}

int main() {

    srand((unsigned) time(NULL));

    int length = ReadPositiveNumber("Enter how many keys do you want to generate?");

    string ArrayOfkeys[length];

    set_ArrayOfKeys(ArrayOfkeys , length);

    get_ArrayOfKeys(ArrayOfkeys , length);


}
