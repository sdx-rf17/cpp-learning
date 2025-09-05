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

string GenerateKey(int lengthOfword , int NumOfWord = 4){

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

void printAll_TheKeys(){

    int NumberOfkeys = ReadPositiveNumber("Enter how many keys do you want to generate?");
    int lengthOfword = ReadPositiveNumber("Enter the number of how many characters in the word between dash (-)");
    for (int c = 1 ; c <= NumberOfkeys ; c++) {

        cout << "Key [" << c << "] : ";
        cout  << GenerateKey(lengthOfword) << endl;
    }
}

int main() {

    srand((unsigned) time(NULL));
    printAll_TheKeys();
}
